#include <bits/stdc++.h>
using namespace std;
unordered_map <int,int> umap;
int min_swap(int arr[],int n,int flag)
{
	bool visit[n];
	memset(visit,false,n*sizeof(bool));
	pair <int,int> position[n];
	int i,j,ans=0,cycle;
	for(i=0;i<n;i++)
	{
		position[i].first=arr[i];
		position[i].second=i;
	}
	sort(position,position+n);
	if(flag)
		reverse(position,position+n);
	for(i=0;i<n;i++)
	{
		if(visit[i] || position[i].second==i)
			continue;
		cycle=0;
		j=i;
		while(!visit[j])
		{
			visit[j]=1;
			j=position[j].second;
			cycle++;
		}
		ans+=cycle-1;
	}
	return ans;
}
int main() 
{
	int n;
	cin >> n;
	int arr[n],i,sol,count=0;
	for(i=0;i<n;i++)
		cin >> arr[i];
	vector <int> vec(arr,arr+n);
	sort(vec.begin(),vec.end());
	for(i=0;i<n;i++)
		umap[vec[i]]=count++;
	for(i=0;i<n;i++)
		arr[i]=umap[arr[i]];
	sol=min_swap(arr,n,0);
	sol=min(sol,min_swap(arr,n,1));
	cout << sol << endl;
	return 0;
}
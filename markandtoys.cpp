#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int n,i,count=0;
	long int k,temp;
	cin >>n>>k;
	vector<long int> v;
	for(i=0;i<n;i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	for(i=0;i<n;i++)
	{
		if(k>=v[i])
		{
			k-=v[i];
			count++;
		}
		else
			break;
	}
	cout<<count<<endl;
	return 0;
}
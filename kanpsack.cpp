#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		int value[n],i,minimum,flag=0,sum=0,temp;
		int remiander[n],vecmin,remmin;
		vector <int> v;
		for(i=0;i<n;i++)
		{
			//cout<<"hello"<<endl;
			cin >> value[i];
			if(value[i]==1)
				flag=1;
			if(k%value[i]==0)
				flag=1;
			if(value[i]<=k)
			{
				sum+=value[i];
				if(sum<k)
					v.push_back(k-(k/sum)*sum);
				if(k%sum==0)
					flag=1;
			}
			temp=(k/value[i])*value[i];
			remiander[i]=k-temp;
		}
		//cout<<"hello1"<<endl;
		sort(value,value+n);
		sum=value[0]+value[1];
		if(k%sum==0)
			flag=1;
		minimum=*min_element(value,value+n);
		if(flag==1)
			cout<<k<<endl;
		else if(minimum>k)
		{
			cout<<0<<endl;
		}
		else 
		{
			for(i=0;i<n;i++)
			{
				if(binary_search(value,value+n,remiander[i]))
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				cout<<k<<endl;
			}
			else
			{
				remmin=k-*min_element(remiander,remiander+n);
				vecmin=k-*min_element(v.begin(),v.end());
				cout<<max(remmin,vecmin)<<endl;
			}
		}
	}
	return 0;
}
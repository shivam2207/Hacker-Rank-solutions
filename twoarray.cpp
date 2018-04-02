#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool myfunc(long int i,long int j)
{
	return(i>j);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,flag=0;
		long int k,temp;
		cin>>n>>k;
		vector<long int> v1;
		vector<long int> v2;
		for(int i=0;i<n;i++)
		{
			cin>>temp;
			v1.push_back(temp);
		}
		for(i=0;i<n;i++)
		{
			cin>>temp;
			v2.push_back(temp);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end(),myfunc);
		for(i=0;i<n;i++)
		{
			if((v1[i]+v2[i])<k)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
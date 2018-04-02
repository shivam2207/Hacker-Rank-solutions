#include <iostream>
#include <vector>
using namespace std;
#define mod 1000000007
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,i,j;
		vector<int> v;
		cin >> n >> m;
		m=m-1;
		long long int pro=1;
		if(n>m)
		{
			for(i=n+1;i<=n+m;i++)
			{
				v.push_back(i);
			}
			for(i=1;i<=m;i++)
			{
				for(j=0;j<(int)v.size();j++)
				{
					if(v[j]%i==0)
					{
						v[j]=v[j]/i;
						break;
					}
				}
			}
		}
		else
		{
			for(i=m+1;i<=n+m;i++)
			{
				v.push_back(i);
			}
			for(i=1;i<=n;i++)
			{
				for(j=0;j<(int)v.size();j++)
				{
					if(v[j]%i==0)
					{
						v[j]=v[j]/i;
						break;
					}
				}
			}	
		}
		for(i=0;i<(int)v.size();i++)
		{
			pro=(pro*v[i])%mod;
			//if(pro>=mod)
			//	pro=pro%mod;
		}
		cout<<pro<<endl;
	}
	return 0;
}
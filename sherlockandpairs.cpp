#include <iostream>
#include <map>
using namespace std;
map<int,int>mymap;
long long function(long long);
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		mymap.clear();
		int n,i,temp;
		long long count=0;
		cin >> n;
		//n=100000;
		map<int,int>:: iterator it;
		for(i=0;i<n;i++)
		{
			cin>> temp;
			//temp=234523;
			mymap[temp]++;
		}
		for(it=mymap.begin();it!=mymap.end();it++)
		{
			if(it->second>1)
			{
				count+=function(it->second);
			}
			//cout<<it->first<<" "<<it->second<<endl;
		}
		cout<<count<<endl;
	}	
	return 0;
}
long long function (long long n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 2;
	else
		return n*(n-1);
}
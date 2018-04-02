#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
map <string,int> mymap;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		mymap.clear();
		string s;
		cin >> s;
		int limit=s.size(),i,j;
		map <string,int> :: iterator it;
		long long ans=0;
		for(i=0;i<limit;i++)
		{
			for(j=1;i+j<=limit;j++)
			{
				string s1=s.substr(i,j);
				sort(s1.begin(),s1.end());
				mymap[s1]++;
			}
		}
		for(it=mymap.begin();it!=mymap.end();it++)
		{
			ans+=(long long)((it->second)*(it-> second-1)/2);
		}
		cout <<ans<<endl;
	}
	return 0;
}
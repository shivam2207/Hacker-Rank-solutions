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
		int limit=s.size(),i,j,k;
		cin >> k;
		long long count1=0,count2;
		map <string,int> :: iterator it;
		for(i=0;i<limit;i++)
		{
			for(j=1;i+j<=limit;j++)
			{
				string s1=s.substr(i,j);
				mymap[s1]=s1.size();
			}
		}
		// for (auto& x: mymap) 
		// {
		// 	std::cout << x.first << ": " << x.second << '\n';
		// }

		for(it=mymap.begin();it!=mymap.end();it++)
		{
			count2=count1;
			count1+=it->second;
			if(count1>=k)
				break;
		}
		string temp=it->first;
		//cout <<temp<<endl;
		cout<<temp[k-count2-1]<<endl;;
		//cout << "\n";
	}
	return 0;
}
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,j,flag=0;
		cin >> n;
		string s[n];
		for(i=0;i<n;i++)
		{
			cin >> s[i];
			sort(s[i].begin(),s[i].end());
		}
		/*for(i=0;i<n;i++)
		{
			cout<<s[i]<<endl;
		}*/
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(s[j][i]>s[j+1][i])
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
				break;
		}
		if(flag==1)
		{
			cout<<"NO"<<endl;
		}
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
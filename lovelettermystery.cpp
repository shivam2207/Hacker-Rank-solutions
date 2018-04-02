#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int i,len=s.size(),j,count=0;
		i=0;
		j=len-1;
		while(i<j)
		{
			if(s[i]==s[j])
			{
				i++;
				j--;
			}
			else
			{
				count+=abs(s[i]-s[j]);
				i++;
				j--;
			}
		}
		cout <<count<<endl;
	}
	return 0;
}
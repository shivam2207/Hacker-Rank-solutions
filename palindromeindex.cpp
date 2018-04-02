#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int i,j,index,flag=0;
		j=s.length()-1;
		i=0;	
		while(i<j)
		{
			if(s[i]==s[j])
			{
				i++;
				j--;
			}
			else
			{
				flag=1;
				if(s[i]==s[j-1] && s[i+1]==s[j-2])
				{
					index=j;
					break;
				}
				else if(s[i+1]==s[j] && s[i+2]==s[j-1])
				{
					index=i;
					break;
				}
			}
		}
		if(flag==0)
			cout<<-1<<endl;
		else
			cout<<index<<endl;
	}
	return 0;
} 
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int len=s.size(),i,count=0,temp;
	for(i=0;i<len;i++)
	{
		temp=i%3;
		if(temp==0)
		{
			if(s[i]!='S')
			{
				count++;
			}
		}
		else if(temp==1)
		{
			if(s[i]!='O')
			{
				count++;
			}

		}
		else
		{
			if(s[i]!='S')
			{
				count++;
			}

		}
	}
	cout<<count<<endl;
	return 0;
}
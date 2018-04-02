#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	string s,str;
	cin >> s;
	int len=s.length(),x=0,y=0,i;
	for(i=0;i<len;i++)
	{
		if(s[i]=='N')
			x++;
		else if(s[i]=='S')
			x--;
		else if(s[i]=='E')
			y++;
		else
			y--;
	}
	while(y>0)
	{
		str.append("E");
		y--;
	}
	while(x>0)
	{
		str.append("N");
		x--;
	}
	while(x<0)
	{
		str.append("S");
		x++;
	}
	while(y<0)
	{
		str.append("W");
		y++;
	}
	cout<<str<<endl;
	return 0;
}
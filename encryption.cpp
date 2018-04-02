#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	string s,str;
	getline(cin,s);
	int len=s.length(),i,j,row,coloum;
	char c;
	for(i=0;i<len;i++)
	{
		if(s[i]!=' ')
		{
			c=s[i];
			str.append(&c,0,1);
		}
	}
	len=str.length();
	float rootvalue=sqrt(len);
	row=floor(rootvalue);
	coloum=ceil(rootvalue);
	if(row*coloum<len)
		row++;
	for(i=0;i<coloum;i++)
	{
		for(j=0;j<row;j++)
		{
			if((i+j*coloum)<len)
				cout<<str[i+j*coloum];
		}
		cout<<" ";	
	}
	cout<<"\n";
	//cout<<rootvalue<<"\n"<<row<<"\n"<<coloum<<endl;
	return 0;
}
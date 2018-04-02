#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int len=s.length(),i,array[26]={0},temp,flag=0,count=0;
	for(i=0;i<len;i++)
	{
		temp=(int)(s[i]-'a');
		array[temp]++;
	}
	for(i=0;i<26;i++)
	{
		if(array[i]%2!=0)
		{
			flag=1;
			count++;
		}
	}
	if(len%2==0)
	{
		if(flag==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
	{
		if(count==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
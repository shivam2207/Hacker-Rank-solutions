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
		int len=s.size();
		if(len%2!=0)
			cout<<-1<<endl;
		else
		{
			int array1[26]={0},array2[26]={0},i,j,count=0,temp;
			j=len/2;
			for(i=0;i<len;i++)
			{
				if(i<j)
				{
					temp=s[i]-'a';
					array1[temp]++;
				}
				else
				{
					temp=s[i]-'a';
					array2[temp]++;
				}
			}
			for (i = 0; i < 26; ++i)
			{
				count+=abs(array2[i]-array1[i]);
			}
			cout<<count/2<<endl;
		}
	}
	return 0;
}
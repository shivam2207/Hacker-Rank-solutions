#include <iostream>
#include <cstring>
#include <string>
using namespace std;

long int lps(string);
long int max (int x, int y) 
{ 
	return (x > y)? x : y; 
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int len1,len2,len4;
		string s1,s2;
		cin >> s1 >> s2;
		len1=lps(s1);
		//cout<<len1<<endl;
		len2=lps(s2);
		//cout<<len2<<endl;
		len4=len1+len2;
		cout<<len4<<endl;
	}
	return 0;
}

long int lps(string str)
{
	long int n=str.size();
	long int array[26]={0},i,max=0,count=0;
	for(i=0;i<n;i++)
	{
		array[str[i]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(array[i]%2==0)
		{
			count+=array[i];
		}
		else
		{
			if(array[i]>max)
				max=array[i];
		}
		//cout<<"i="<<i<<" "<<array[i]<<endl;
	}
	//cout<<"count="<<count<<endl;
	//cout<<"max="<<max<<endl;
	return count;
}
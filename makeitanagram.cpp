#include <iostream>
#include <string>
#include <climits>
#include <cmath>
using namespace std;
int main()
{
	string s1,s2;
	cin >> s1 >> s2;
	int len1=s1.length(),len2=s2.length();
	int i,array1[26]={0},array2[26]={0},count=0,temp;
	for(i=0;i<len1;i++)
	{
		temp=(int)(s1[i]-'a');
		array1[temp]++;
	}
	for(i=0;i<len2;i++)
	{
		temp=(int)(s2[i]-'a');
		array2[temp]++;
	}
	for(i=0;i<26;i++)
	{
		count+=abs(array1[i]-array2[i]);
	}
	cout<<count<<endl;
	return 0;
}
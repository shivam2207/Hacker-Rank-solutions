#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef struct data
{
	int count;
	char ch;
	int index;
}data;
bool compare(data a,data b)
{
	return a.count<=b.count;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int n=s.size(),i,temp;
		data array[26];
		for(i=0;i<26;i++)
		{
			array[i].count=0;
			array[i].index=i;
			array[i].ch=(char)i+97;
		}
		for(i=0;i<n;i++)
		{
			temp=s[i]-'a';
			array[temp].count++;
		}
		sort(array,array+n,compare);
		for(i=0;i<26;i++)
		{
			cout<<array[i].ch<<" ";
		}
		cout << "\n";
	}
	return 0;
}
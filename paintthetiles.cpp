#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	int i,len,count=1;
	len=s.size();
	char cuttent;
	cuttent=s[0];
	for(i=1;i<len;i++)
	{
		if(s[i]!= cuttent)
		{
			count++;
			cuttent=s[i];
		}
	}
	cout << count <<endl;
	return 0;
} 
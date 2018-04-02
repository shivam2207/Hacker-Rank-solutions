#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,temp,i;
	cin >> n;
	string s;
	cin >> s >> k;
	k=k%26;
	for(i=0;i<n;i++)
	{
		temp=(int)s[i];
		if(temp>=65 && temp <=90)
		{
			temp+=k;
			if(temp>90)
				temp=65+(temp-90-1);
			s[i]=(char)temp;
		}
		else if(temp>=97 && temp<=122)
		{
			temp+=k;
			if(temp>122)
				temp=97+(temp-122-1);
			s[i]=(char)temp;
		}
	}
	cout << s << endl;
	return 0;
}
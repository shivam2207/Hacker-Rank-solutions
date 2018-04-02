#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int i,array[n],count=0;
	string s;
	for(i=0;i<n;i++)
	{
		cin >>array[i];
		if(array[i]%2==0)
			s.append("e");
		else
			s.append("o");
		// if(i!=1)
		// {
		// 	if(s[i-1]=='o' && s[i]=='o')
		// 	{
		// 		s[i-1]='e';
		// 		s[i]='e';
		// 		count+=2;
		// 	}
		// }
	}
	for(i=0;i<n;i++)
	{
		if(i!=n-1)
		{
			if(s[i]=='o')
			{
				s[i]='e';
				if(s[i+1]=='o')
					s[i+1]='e';
				else
					s[i+1]='o';
				count+=2;
			}
		}
	}
	string :: size_type found=s.find('o');
	if(found!=string :: npos)
		cout << "NO" << endl;
	else
		cout << count << endl;
	//cout << s << endl;
	return 0;
}
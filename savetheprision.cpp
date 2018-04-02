#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,m,s,temp;
		cin >> n >> m >> s;
		temp=(s+m-1)%n;
		if(temp==0)
			temp=n;
		cout << temp <<endl;
	}
	return 0;
}
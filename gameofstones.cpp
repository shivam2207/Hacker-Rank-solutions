#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n[101],i;
		n[0]=0;
		n[1]=2;
		n[2]=1;
		n[3]=1;
		n[4]=1;
		n[5]=1;
		for(i=6;i<=100;i++)
		{
			if(n[i-2]==1 && n[i-3]==1 && n[i-5]==1)
			{
				n[i]=2;
			}
			else
				n[i]=1;
		}
		int m;
		cin >> m;
		if(n[m]==1)
			cout << "First" << endl;
		else
			cout << "Second" << endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int map[101]={0};
	int grundy_number[1000001],i,j;
	grundy_number[0]=0;
	grundy_number[1]=0;
	for(i=2;i<=100000;i++)
	{
		memset(map,0,sizeof(map));
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				map[grundy_number[j]]=1;
			}
		}
		for(j=0;j<=100;j++)
		{
			if(map[j]==0)
				break;
		}
		grundy_number[i]=j;
	}
	//cout << "done" << endl;
	int t;
	cin >> t;
	while(t--)
	{
	//	cout << "hello" << endl;
		int n,m;
		cin >> n >> m;
		if(n%2==0)
			cout << "2" << endl;
		else
		{
			if(grundy_number[m]==0)
				cout << "2" << endl;
			else
				cout << "1" << endl;
		}
	}
	return 0;
}
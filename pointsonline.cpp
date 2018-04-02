#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long int gcd(long long int a,long long int b)
{
	if(a==0 && b==0)
	{
		return(-1);
	}
	if(a==0)
		return(b);
	if(b==0)
		return(a);
	else
	{
		return(gcd(b%a,a));
	}
}
int main()
{
	int n;
	cin >> n;
	int cord[n][2],i,j,x,y,flagx=0,flagy=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			cin >> cord[i][j];
		}
	}
	x=cord[0][0];
	y=cord[0][1];
	for(i=1;i<n;i++)
	{
		if(cord[i][0]!=x)
			flagx=1;
		if(cord[i][1]!=y)
			flagy=1;
	}
	if(flagx&&flagy)
		cout <<"NO"<<endl;
	else
		cout <<"YES"<<endl;
	return 0;
}
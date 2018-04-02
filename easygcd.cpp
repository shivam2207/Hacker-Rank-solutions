#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
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
bool is_prime(int n)
{
	int i,flag=0;
	for(i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag)
		return false;
	else
		return true;
}
int main()
{
	int n,k,i,g,t;
	cin >> n>>k;
	vector <int> vec(n,0);
	for(i=0;i<n;i++)
		cin >> vec[i];
	if(n==1)
	{
		if(is_prime(vec[0]))
			cout <<(k/vec[0])*vec[0]<< endl;
		else
		{
			for(i=k;i>=0;i--)
			{
				g=gcd(i,vec[0]);
				if(g!=1)
					break;
			}
			cout << i << endl;
		}
	}
	else
	{
		g=gcd(vec[0],vec[1]);
		for(i=2;i<n;i++)
			g=gcd(g,vec[i]);
		if(is_prime(g))
			cout << (k/g)*g << endl;
		else
		{
			for(i=k;i>=0;i--)
			{
				t=gcd(i,g);
				if(t!=1)
					break;
			}
			cout << i << endl;	
		}
	}
	return 0;
}
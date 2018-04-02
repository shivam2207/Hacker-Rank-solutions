#include <bits/stdc++.h>
using namespace std;
#define ipi(n) scanf("%d",&n); 
#define ipl(n) scanf("%lld",&n);
#define pfi(n) printf("%d\n",n);
#define pfl(n) printf("%lld\n",n);
#define pfiw(n) printf("%d ",n);
#define pflw(n) printf("%lld ",n);
#define pb push_back
#define mod 1000000007
#define ll long long int
typedef vector<int> vi;
typedef vector<ll> vl;
ll funct(ll );
ll total(ll );
int main()
{
	int t;
	ipi(t);
	while(t--)
	{
		ll a,b;
		ll sol=0;
		ipl(a);
		ipl(b);
		if(b>=0 && a>=0)
		{
			if(a==0)
				sol+=funct(b);
			else
				sol+=funct(b)-funct(a-1);
		}
		else if(b>=0 && a<0)
		{
			sol+=funct(b);
			sol+=(32*abs(a))-funct(abs(a)-1);
		}
		else
		{
			sol+=((32*abs(a))-funct(abs(a)-1));
			sol-=((32*(abs(b)-1))-funct(abs(b)-2));
		}
		pfl(sol);
	}
	return 0;
}

ll funct(ll a)
{
	if(a==0)
		return 0;
	else if(a%2==0)
		//return funct(a-1)+__builtin_popcountl(a);
		return funct(a-1)+total(a);
	else
		return (a+1)/2+2*funct(a/2);
}

ll total(ll n)
{
	ll count=0;
	while(n)
	{
		count++;
		n=n&(n-1);
	}
	return count;
}
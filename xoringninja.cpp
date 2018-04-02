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
ll power(int);
int main()
{
	int t;
	ipi(t);
	while(t--)
	{
		int n;
		ipi(n);
		int arr[n],i;
		ll or_sum,ans;
		for(i=0;i<n;i++)
		{
			ipi(arr[i]);
			if(i==0)
			{
				or_sum=arr[i];
			}
			else
			{
				or_sum|=arr[i];
			}
		}
		ans=(or_sum*power(n-1))%mod;
		pfl(ans);
	}
	return 0;
}
ll power(int y)
{
	ll res=1,x=2;
	while (y > 0)
	{
		if (y & 1)
			res = (res*x)%mod;
		y = y>>1;
		x = (x*x)%mod;
	}
	return res;
}
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
int main()
{
	int q;
	ipi(q);
	while(q--)
	{
		ll l,r,ans=0,blockl,blockr,blocks,i;
		ipl(l);
		ipl(r);
		blockl=l/4;
		blockr=r/4;
		if(l%4==0)
			ans=l;
		else if(l%4==1)
			ans=1;
		else if(l%4==2)
			ans=l+1;
		else
			ans=0;
		if(blockl==blockr)
		{
			for(i=l+1;i<=r;i++)
			{
				if(i%4==0)
					ans^=i;
				else if(i%4==1)
					ans^=1;
				else if(i%4==2)
					ans^=i+1;
				else
					ans^=0;
			}
		}
		else
		{
			blocks=blockr-blockl-1;
			for(i=l+1;i%4!=0;i++)
			{
				if(i%4==0)
					ans^=i;
				else if(i%4==1)
					ans^=1;
				else if(i%4==2)
					ans^=i+1;
				else
					ans^=0;
			}
			for(i=(r/4)*4;i<=r;i++)
			{
				if(i%4==0)
					ans^=i;
				else if(i%4==1)
					ans^=1;
				else if(i%4==2)
					ans^=i+1;
				else
					ans^=0;
			}
			if(blocks%2!=0)
				ans^=2;
		}
		pfl(ans);
	}
	return 0;
}
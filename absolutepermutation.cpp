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
	int t;
	ipi(t);
	while(t--)
	{	
		int n,k,i,temp;
		ipi(n);
		ipi(k);
		if(k==0)
		{
			for(i=1;i<=n;i++)
				pfiw(i);
			printf("\n");
		}
		else if(n%2==1)
			printf("-1\n");
		else
		{
			if(n%k==0 && (n/k)%2==0)
			{
				for(i=1;i<=n;i++)
				{
					if(((i-1)/k)%2==0)
						temp=i+k;
					else
						temp=i-k;
					pfiw(temp);
				}
				printf("\n");
			}
			else
				printf("-1\n");
		}
	}
	return 0;
}
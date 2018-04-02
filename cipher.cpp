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
	int n,k,x,i;
	ipi(n);
	ipi(k);
	char s[n+k-1];
	int out[n];
	scanf("%s",s);
	out[0]=s[0]-'0';
	x=0;
	for(i=1;i<n;i++)
	{
		if(i<k)
		{
			x^=out[i-1];
			out[i]=x^(s[i]-'0');
		}
		else
		{
			x^=out[i-1];
			x^=out[i-k];
			out[i]=x^(s[i]-'0');
		}
	}
	for(i=0;i<n;i++)
		printf("%d",out[i]);
	printf("\n");
	return 0;
}
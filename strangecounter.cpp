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
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
ll ttime[41],value[41],power[41];
int main()
{
	int i;
	power[0]=1;
	ttime[1]=1;
	for(i=1;i<=40;i++)
	{
		power[i]=power[i-1]*2;
		value[i]=3*power[i-1];
	}
	for(i=2;i<=40;i++)
	{
		ttime[i]=value[i-1]+ttime[i-1];
	}
	ll t,temp;
	ipl(t);
	for(i=1;i<=40;i++)
	{
		if(ttime[i]>t)
			break;
	}
	i--;
	temp=t-ttime[i];
	pfl(value[i]-temp);
	return 0;
}
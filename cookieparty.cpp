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
typedef vector<int> vi;
typedef vector<long long> vl;
typedef long long ll;
int main()
{
	int n,m;
	ipi(n);
	ipi(m);
	if(m%n==0)
		printf("0\n");
	else
	{
		pfi(n-m%n);
	}
	return 0;
}
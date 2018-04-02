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
	int n,i,sum=0,maxx;
	ipi(n);
	vi vec(n,0);
	for(i=0;i<n;i++)
	{
		ipi(vec[i]);
		sum+=vec[i];
	}
	maxx=*max_element(vec.begin(),vec.end());
	sum-=maxx;
	if(n==1)
	{
		printf("1\n");
	}
	else if(maxx>=sum)
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	return 0;
}
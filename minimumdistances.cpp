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
	int n;
	ipi(n);
	int arr[n],i,maxx=0,j,ans=INT_MAX;
	for(i=0;i<n;i++)
	{
		ipi(arr[i]);
		maxx=max(maxx,arr[i]);
	}
	vi vec[maxx+1];
	for(i=0;i<n;i++)
	{
		vec[arr[i]].pb(i);
	}
	for(i=1;i<=maxx;i++)
	{
		if(vec[i].size()>1)
		{
			for(j=0;j<(int)vec[i].size()-1;j++)
			{
				ans=min(ans,abs(vec[i][j]-vec[i][j+1]));
				if(ans==1)
					break;
			}
		}
		if(ans==1)
			break;
	}
	if(ans==INT_MAX)
		printf("-1\n");
	else
		pfi(ans);
	return 0;
}
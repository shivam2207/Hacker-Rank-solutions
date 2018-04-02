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
	int n,k;
	ipi(n);
	ipi(k);
	int arr[n],i,ans=0;
	vi vec(k,0);
	for(i=0;i<n;i++)
	{
		ipi(arr[i]);
		vec[arr[i]%k]++;
	}
	if(k%2==0)
	{
		for(i=1;i<k/2;i++)
			ans+=max(vec[i],vec[k-i]);
		if(vec[0]!=0)
			ans+=1;
		if(vec[k/2]!=0)
			ans+=1;
	}
	else
	{
		for(i=1;i<=k/2;i++)
			ans+=max(vec[i],vec[k-i]);
		if(vec[0]!=0)
			ans+=1;
	}
	pfi(ans);
	return 0;
}
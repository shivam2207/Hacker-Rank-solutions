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
	int n,d;
	ipi(n);
	ipi(d);
	int arr[n],i,cnt=0;
	for(i=0;i<n;i++)
		ipi(arr[i]);
	for(i=1;i<n-1;i++)
	{
		if(binary_search(arr,arr+i,arr[i]-d) && binary_search(arr+i+1,arr+n,arr[i]+d))
			cnt++;
	}
	pfi(cnt);
	return 0;
}
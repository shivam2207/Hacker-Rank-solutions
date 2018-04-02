#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mod 1000000007
#define ll long long int
#define pi pair<int,int>
#define pl pair<ll,ll>
#define ppi pair<int,pi>
#define ppl pair<ll,pl>
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define vp vector<pi>
int main()
{
	ios_base::sync_with_stdio(false);
	int n,k,i;
	cin >> n >> k;
	ll arr[n],pr_sum[n],pr_sum_square[n],curr,sol;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			pr_sum[i]=arr[i];
			pr_sum_square[i]=arr[i]*arr[i];
		}
		else
		{
			pr_sum[i]=pr_sum[i-1]+arr[i];
			pr_sum_square[i]=pr_sum_square[i-1]+arr[i]*arr[i];
		}
	}
	curr=2*(k*(pr_sum_square[k-1])-pr_sum[k-1]*pr_sum[k-1]);
	sol=curr;
	for(i=1;i<=n-k;i++)
	{
		curr=2*(k*(pr_sum_square[i+k-1]-pr_sum_square[i-1])-(pr_sum[i+k-1]-pr_sum[i-1])*(pr_sum[i+k-1]-pr_sum[i-1]));
		sol=min(sol,curr);
	}
	cout << sol << endl;
	return 0;
}
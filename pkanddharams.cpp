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
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	int arr[n],i,j,prfix_sum[n],sol=0;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		arr[i]%=k;
		if(i==0)
			prfix_sum[i]=arr[i];
		else
			prfix_sum[i]=prfix_sum[i-1]+arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(prfix_sum[i]%k==0)
			sol++;
		for(j=0;j<i;j++)
		{
			if((prfix_sum[i]-prfix_sum[j]+k)%k==0)
				sol++;
		}
	}
	cout << sol << endl;
	return 0;
}
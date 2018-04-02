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
	int n,i,j,maxx=1,ind=0,curr=0,ans;
	cin >> n;
	vi vec(2*n);
	for (i =0;i < n ;i++)
		cin >> vec[i];
	for(j=0;j<n;j++,i++)
		vec[i]=vec[j];
	for(i=1;i<2*n;i++)
	{
		if(vec[i]>=vec[i-1])
		{
			curr++;
		}
		else
		{
			if(curr>maxx)
			{
				ans=ind;
				maxx=curr;
				curr=1;
			}
			else
			{
				curr=1;
				ind=i;
			}
		}
	}
	cout << ans+1 << endl;
	return 0;
}
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
	int n;
	cin >> n;
	int i,j,sum1=0,sum2=0,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> t;
			if(i==j)
				sum1+=t;
			if(j==n-1-i)
				sum2+=t;
		}
	}
	cout << abs(sum1-sum2)<<endl;
	return 0;
}
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
int power(int n)
{
	int result=1,x=2;
	while(n>0)
	{
		if(n & 1)
			result*=x;
		n>>=1;
		x*=x;
	}	
	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	int n,x,ans;
	cin >> n >> x;
	ans=power(n)-1;
	cout << abs(ans-x) << endl;
	return 0;
}
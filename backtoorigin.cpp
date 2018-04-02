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
	ll xt,yt,xd,yd,n,xv,yv;
	cin >> xt >> yt;
	cin >> n;
	xv=xt;
	yv=yt;
	while(n--)
	{
		cin >> xd >> yd;
		xv=xv-xd;
		yv=yv-yd;
	}
	cout << xv << " " << yv << endl;
	return 0;
}
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
#define sz 5002
typedef vector<int> vi;
typedef vector<ll> vl;
int table_left[sz][sz],table_right[sz][sz];
vi pos[62];
int func(char ch)
{
	if(ch>='a' && ch<='z')
		return ch-'a';
	else if(ch>='A' && ch <='Z')
		return ch-'A'+26;
	else 
		return ch-'0'+52;
}
int main()
{
	ios_base::sync_with_stdio(false); 
	string a,b;
	cin >> a >> b;
	
	int n=a.size(),m=b.size(),i,j,total;
	ll cnt=0;
	for(i=0;i<m;i++)
	{
		pos[func(b[i])].pb(i+1);
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(a[i-1]==b[j-1])
				table_left[i][j]=table_left[i-1][j-1]+1;
			else
				table_left[i][j]=max(table_left[i-1][j],table_left[i][j-1]);
		}
	}
	total=table_left[n][m];
	for(i=n;i>=1;i--)
	{
		for(j=m;j>=1;j--)
		{
			if(a[i-1]==b[j-1])
				table_right[i][j]=table_right[i+1][j+1]+1;
			else
				table_right[i][j]=max(table_right[i+1][j],table_right[i][j+1]);
		}
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<62;j++)
		{
			for(auto x:pos[j])
			{
				if(table_left[i][x-1]+table_right[i+1][x+1]==total)
				{
					cnt++;
					break;
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}
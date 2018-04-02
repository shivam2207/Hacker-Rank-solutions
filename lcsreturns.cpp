#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define ll  long long int
#define pi pair<ll,ll>
#define pii pair<ll,pi>
#define f first
#define mp make_pair
#define mod 1000000007
#define s second
#define pb push_back

int dpl[5011][5011];
int dpr[5011][5011];
vector<int>pos[5011];
int func(char c)
{
	if(c>='a' and c<='z') return c-'a';
	if(c>='A' and c<='Z') return c-'A'+26;
	return c-'0'+52;
}
int main()
{
	string A,B;
	cin >> A >> B;
	int N=A.length();
	int M=B.length();
	rep(i,M)
	{
		pos[func(B[i])].pb(i+1);
	}
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=M;j++)
		{
			if(A[i-1]==B[j-1])
			{
				dpl[i][j]=dpl[i-1][j-1]+1;
			}
			else
			{
				dpl[i][j]=max(dpl[i-1][j],dpl[i][j-1]);
			}
		}
	}
	int LCS=dpl[N][M];
	for(int i=N;i>=1;i--)
	{
		for(int j=M;j>=1;j--)
		{
			if(A[i-1]==B[j-1])
			{
				dpr[i][j]=dpr[i+1][j+1]+1;
			}
			else
			{
				dpr[i][j]=max(dpr[i+1][j],dpr[i][j+1]);
			}
		}
	}
	ll ans=0;
	// insering character between position i and i+1
	for(int i=0;i<=N;i++)
	{
		rep(j,62)
		{
			for(auto x:pos[j])
			{
				if(dpl[i][x-1]+dpr[i+1][x+1]==LCS)
				{
					ans++;
					break;
				}
			}
		}
	}
	cout<<ans<<endl;
}
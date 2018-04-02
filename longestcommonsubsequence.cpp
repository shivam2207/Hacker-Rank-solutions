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
stack <int> st;
int main()
{
	int n,m,i,j;
	ipi(n);
	ipi(m);
	int arr1[n],arr2[m],table[n+1][m+1];
	for(i=0;i<n;i++)
	{
		ipi(arr1[i]);
	}
	for(i=0;i<m;i++)
	{
		ipi(arr2[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=m;j++)
		{
			if(i==0 || j==0)
				table[i][j]=0;
			else if(arr1[i-1]==arr2[j-1])
				table[i][j]=table[i-1][j-1]+1;
			else
				table[i][j]=max(table[i-1][j],table[i][j-1]);
		}
	}
	i=n;
	j=m;
	while(i>0 && j>0)
	{
		if(arr1[i-1]==arr2[j-1])
		{
			st.push(arr1[i-1]);
			i--;
			j--;
		}
		else if(table[i-1][j] > table[i][j-1])
			i--;
		else
			j--;
	}
	//pfi(table[n][m]);
	while(!st.empty())
	{
		if(st.size()==1)
		{
			pfi(st.top());
		}
		else
		{
			pfiw(st.top());
		}
		st.pop();
	}
	//printf("\n");
	return 0;
}
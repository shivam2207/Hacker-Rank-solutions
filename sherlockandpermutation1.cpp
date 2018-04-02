#include <cstdio>
#include <cassert>
static int matrix[2001][2001],mod=1000000007;
void pascal(int);

int main()
{
	pascal(2000);
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int m,n;
		scanf("%d %d",&n,&m);
		m=m-1;
		printf("%d\n",matrix[m+n][n]);
	}
	return 0;
}

void pascal(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0 || j==i)
			{
				matrix[i][j]=1;
			}
			else
			{
				matrix[i][j]=matrix[i-1][j-1]+matrix[i-1][j];
				if(matrix[i][j]>=mod)
					matrix[i][j]-=mod;

			}
		}
	}
}

// long long combi(int n,int k)
// {
// 	long long ans=1;
// 	k=k>n-k?n-k:k;
// 	int j=1;
// 	for(;j<=k;j++,n--)
// 	{
// 		if(n%j==0)
// 		{
// 			ans=(ans*n/j)%mod;
// 		}
// 		else if(ans%j==0)
// 		{
// 			ans=(ans/j*n)%mod;
// 		}
// 		else
// 		{
// 			ans=((ans*n)/j)%mod;
// 		}
// 	}
// 	return ans;
// }
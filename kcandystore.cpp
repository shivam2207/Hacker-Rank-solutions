#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define mod 1000000000

int matrix [1001][1001];
void pascal(int n);

int main()
{
	pascal(1000);
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		cout << matrix[n+k-1][k] << endl;
	}
	return 0;
}

void pascal(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(j==0 || j==i)
			{
				matrix[i][j]=1;
			}
			else
			{
				matrix[i][j]=(matrix[i-1][j-1]+matrix[i-1][j]) % mod;
			}
		}
	}
}
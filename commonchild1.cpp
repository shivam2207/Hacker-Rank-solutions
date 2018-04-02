#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

string a,b;

int table[5001][5001];
int lcs(int,int);
int main()
{
	cin >> a >> b;
	int m,n,output;
	m=a.length();
	n=b.length();
	output=lcs(m,n);
	cout << output << endl;
	return 0;
}

int lcs(int m,int n)
{
	int i, j;
	for (i=0; i<=m; i++)
	{
		for (j=0; j<=n; j++)
		{
			if (i == 0 || j == 0)
				table[i][j] = 0;

			else if (a[i-1] == b[j-1])
				table[i][j] = table[i-1][j-1] + 1;

			else
				table[i][j] = max(table[i-1][j], table[i][j-1]);
		}
	}
	return table[m][n];
}
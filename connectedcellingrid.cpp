#include <bits/stdc++.h>
using namespace std;
int visit[10][10],matrix[10][10],counter=0,n,m;
bool check(int r,int c)
{
	if(r < n && r >= 0 && c >= 0 && c < m)
	{
		if(visit[r][c]==0 )
		{
			counter++;
			visit[r][c]=1;
			return true;
		}
		return false;
	}
	else 
		return false;
}
void dfs(int r,int c)
{
	if(check(r,c)==false)
		return;
	else
	{
		dfs(r-1,c);
		dfs(r-1,c-1);
		dfs(r-1,c+1);
		dfs(r,c-1);
		dfs(r,c+1);
		dfs(r+1,c+1);
		dfs(r+1,c-1);
		dfs(r+1,c);
	}
}
int main() 
{
	int i,j,sol=0;
	cin >> n >> m;
	memset(visit,0,sizeof(visit));
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin >> matrix[i][j]; 
			if(matrix[i][j]==0)
				visit[i][j]=1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(visit[i][j]==0)
			{
				counter = 0;
				dfs(i,j);
				sol=max(sol,counter);
			}
		}
	}
	cout << sol << endl;
	return 0;
}
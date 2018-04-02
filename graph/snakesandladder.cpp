#include <bits/stdc++.h>
using namespace std;
int graph[101][101];
int visit[101];
int cost[101];
void dfs(int,int);
void bfs(int);
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(visit,0,sizeof(visit));
		memset(graph,0,sizeof(graph));
		memset(cost,-1,sizeof(cost));
		int i,j;
		for(i=1;i<100;i++)
		{
			for(j=1;j<=6;j++)
			{
				if(i+j<=100)
				{
					graph[i][i+j]=1;
				}
			}
		}
		int n,m,a,b;
		cin >> n;
		while(n--)
		{
			cin >> a >> b;
			for(i=1;i<=100;i++)
			{
				graph[a][i]=0;
			}
			graph[a][b]=1;
		}
		cin >> m;
		while(m--)
		{
			cin >> a >>b;
			for(i=1;i<=100;i++)
			{
				graph[a][i]=0;
			}
			graph[a][b]=1;
		}
		cost[1]=0;
		bfs(1);
		if(visit[100]==0)
			cout<<"-1"<<endl;
		else
			cout << cost[100]<< endl;
	}
	return 0;
}
void dfs(int vertex,int num)
{
	int i;
	visit[vertex]=1;
	for(i=1;i<=100;i++)
	{
		if(graph[vertex][i]==1)
		{
			if(cost[i]==-1)
				cost[i]=num+1;
			else
			{
				cost[i]=min(num+1,cost[i]);
			}
			if(visit[i]==0 )
			{
				dfs(i,cost[vertex]);
			}
		}
	}
	return;
}
void bfs(int vertex)
{
	queue <int> q;
	int i;
	q.push(vertex);
	visit[vertex]=1;
	while(!q.empty())
	{
		vertex=q.front();
		q.pop();
		for(i=1;i<=100;i++)
		{
			if(visit[i]==0 && graph[vertex][i]!=0)
			{
				if(abs(i-vertex)<=6)
					cost[i]=cost[vertex]+1;
				else
					cost[i]=cost[vertex];
				q.push(i);
				visit[i]=1;
			}
		}	
	}
	return;
}
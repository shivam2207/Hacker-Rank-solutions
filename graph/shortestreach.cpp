#include <bits/stdc++.h>
using namespace std;
int graph[1001][1001];
int visit[1001];
int dist[1001];
void bsf(int,int);
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,x,y,s,i;
		cin >> n >> m;
		memset(graph,0,sizeof(graph));
		for(i=0;i<=n;i++)
		{
			visit[i]=0;
			dist[i]=0;
		}
		while(m--)
		{
			cin >> x >> y;
			graph[x][y]=1;
			graph[y][x]=1;
		}
		cin >> s;
		bsf(s,n);
		for(i=1;i<=n;i++)
		{
			if(visit[i]==0)
				cout<<"-1"<<" ";
			else if(i==s)
				continue;
			else
				cout<<dist[i]*6<< " ";
		}
		cout<<"\n";
	}
	return 0;
}
void bsf(int s,int n)
{
	queue <int> q;
	q.push(s);
	dist[s]=0;
	int i;
	visit[s]=1;
	while(!q.empty())
	{
		s=q.front();
		q.pop();
		for(i=1;i<=n;i++)
		{
			if(visit[i]==0 && graph[s][i]==1)
			{
				dist[i]=dist[s]+1;
				q.push(i);
				visit[i]=1;
			}
		}
	}
	return;
}
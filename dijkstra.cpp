#include <bits/stdc++.h>
using namespace std;
int graph[3001][3001],n,m,start;
void dijkstra(int *);
int mindistance(int *,bool *);
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(graph,0,sizeof(graph));
		cin  >> n >> m;
		int i,x,y,r,dist[n+1];
		for(i=0;i<m;i++)
		{
			cin >> x >> y >> r;
			if(graph[x][y]==0 || r<graph[x][y])
			{
				graph[x][y]=r;
				graph[y][x]=r;
			}
		}
		cin >> start;
		dijkstra(dist);
		for(i=1;i<=n;i++)
		{
			if(i==start)
				continue;
			else
				if(dist[i]==INT_MAX)
					dist[i]=-1;
				cout<< dist[i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}

void dijkstra(int dist[])
{
	int i,u,v;
	bool splset[n+1];
	for(i=1;i<=n;i++)
	{
		dist[i]=INT_MAX;
		splset[i]=false;
	}
	dist[start]=0;
	for(i=1;i<n;i++)
	{
		u=mindistance(dist,splset);
		splset[u]=true;
		for(v=1;v<=n;v++)
		{
			if(!splset[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
			{
				dist[v]=dist[u]+graph[u][v];
			}
		}
	}
}

int mindistance(int dist[],bool splset[])
{
	int i,min_dist=INT_MAX,index;
	for(i=1;i<=n;i++)
	{
		if(splset[i]==false && dist[i]<=min_dist)
		{
			min_dist=dist[i];
			index=i;
		}
	}
	return index;
}
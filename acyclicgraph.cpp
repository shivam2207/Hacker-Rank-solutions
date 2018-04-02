#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef struct node
{
	struct node *next;
	int vertex;
}node;

node *g[50001];
void insert(int,int);
int visit[50001];
static int cnt=0;
int dfs(int i);
int table[50001]={0};
int main()
{
	int n,m,i,u,v;
	cin >> n >> m;
	int totalcount=0,connected;
	for(i=0;i<m;i++)
	{
		cin >> u >> v;
		insert(u,v);
	}
	for(i=1;i<=n;i++)
	{
		//cnt=1;
		memset(visit,0,sizeof(visit));
		connected=dfs(i);
		if(2*connected>=n)
			totalcount++;
	}
	cout<<totalcount<<endl;
	return 0;
}
int dfs(int i)
{
	int n=1,temp;

	if(table[i]!=0)
	{
		return table[i];
	}
	else
	{
		node *p;
		p=g[i];
		visit[i]=1;
		while(p!=NULL)
		{
			i=p->vertex;
			if(!visit[i])
			{
				temp=dfs(i);
				n=n+temp;
			}
			p=p->next;
		}
		table[i]=n;
		return n;
	}
}

void insert(int u,int v)
{
	node *p,*q;
	q=(node *)malloc(sizeof(node));
	q->vertex=v;
	q->next=NULL;
	if(g[u]==NULL)
	{
		g[u]=q;
	}
	else
	{
		p=g[u];
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=q;
	}
}
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <cstring>

using namespace std;

typedef struct graph
{
	int start_node;
	int end_node;
	int weight;
}graph;

int find(int *parent,int i)
{
	if(parent[i]==0)
		return i;
	else
		return find(parent,parent[i]);
}

void unions(int *parent, int i ,int j)
{
	int x=find(parent,i);
	int y=find(parent,j);
	parent[x]=y;
}

struct compare  
{
	bool operator()(const graph& a, const graph& b)  
	{
		if(a.weight!=b.weight)
			return (a.weight>b.weight);
		else
			return(a.weight+a.start_node+a.end_node>b.weight+b.start_node+b.end_node); 
	}
};

int main()
{
	int n,i,startpoint,x,y;
	long long int m,totalweight=0;
	cin >> n >> m;
	graph node;
	priority_queue <graph,vector<graph>,compare> heap;
	int parent[n+1];
	//memset(parent,0,sizeof(parent));
	for(i=0;i<=n;i++)
		parent[i]=0;
	for(i=0;i<m;i++)
	{
		cin >> node.start_node >> node.end_node >> node.weight;
		heap.push(node);
	}
	cin>>startpoint;
	i=1;
	while(i<=n-1 && !heap.empty())
	{
		node=heap.top();
		x=find(parent,node.start_node);
		y=find(parent,node.end_node);
		if(x!=y)
		{
			totalweight+=node.weight;
			unions(parent,x,y);
			i++;
		}
		heap.pop();
	}
	cout<<totalweight<<endl;
	return 0;
}
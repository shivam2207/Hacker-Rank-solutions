#include <iostream>
#include <algorithm>
using namespace std;
typedef struct flavour
{
	int index;
	int cost;
}flavour;

bool compare(flavour a,flavour b)
{
	return a.cost < b.cost;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m,n,i,j,index1,index2;
		cin >> m >> n;
		flavour array[n];
		for(i=0;i<n;i++)
		{
			cin >> array[i].cost;
			array[i].index=i+1;
		}
		sort(array,array+n,compare);
		j=n-1;
		i=0;
		while(i<j)
		{
			if((array[i].cost+array[j].cost)==m)
			{
				break;
			}
			else if((array[i].cost+array[j].cost)>m)
			{
				j--;
			}
			else
				i++;
		}
		if(array[i].index<array[j].index)
		{
			index1=array[i].index;
			index2=array[j].index;
		}
		else
		{
			index1=array[j].index;
			index2=array[i].index;
		}
		cout<<index1<<" "<<index2<<endl;
	}
	return 0;
}
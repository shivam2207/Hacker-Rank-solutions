#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
bool is_sorted_decreasing(int array[],int size)
{
	bool temp=true;
	int i;
	for(i=0;i<size-1;i++)
	{
		if(array[i]<array[i+1])
		{
			temp=false;
			break;
		}
	}
	return temp;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int array[n],i,count=0,limit;
		long long ans=0,cost=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&array[i]);
		}
		// for(i=0;i<n;++i)
		// {
		// 	printf("%d ", array[i]);
		// }
		// printf("\n");
		if(is_sorted_decreasing(array,n))
		{
			printf("0\n");
		}
		else if(is_sorted(array,array+n))
		{
			//printf("hello\n");
			for(i=0;i<n-1;i++)
			{
				cost+=array[i];
			}
			//printf("%d %d %d\n",n,array[n],cost);
			ans=(long long int)(n-1)*array[n-1]-cost;
			printf("%lld\n",ans);
		}
		else
		{
			i=0;
			while(i<n)
			{
				limit=*max_element(array+i,array+n);
				//printf("limit=%d\n",limit);
				count=0;
				cost=0;
				while(array[i]!=limit)
				{
					cost+=array[i];
					count++;
					i++;
				}
				ans+=(long long int)count*array[i]-cost;
				//printf("ans=%d\n",ans);
				i++;
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
}
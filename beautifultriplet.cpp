#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int n,d;
	scanf("%d %d",&n,&d);
	int array[n],i,count=0;
	for(i=0;i<n;i++)
		scanf("%d",&array[i]);
	for(i=0;i<=n-3;i++)
	{
		if(binary_search(array+i,array+n,array[i]+d) && binary_search(array+i,array+n,array[i]+2*d))
			count++;
	}
	printf("%d\n",count);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n],countt=0,maxx=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>maxx)
		{
			maxx=arr[i];
			countt=1;
		}
		else if(arr[i]==maxx)
		{
			countt++;
		}
	}
	printf("%d\n",countt);
	return 0;
}
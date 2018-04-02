#include <cstdio>
#include <algorithm>
using namespace std;
int function(int array[],int , int );
int main()
{
	int n;
	scanf("%d",&n);
	int array[n+1],i,ans;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&array[i]);
	}
	ans=function(array,n,1);
	printf("%d\n",ans);
	return 0;
}
int function(int array[],int n,int current)
{
	if(current>=n)
		return 0;
	else if(array[current]==1)
		return 0;
	else
	{
		if(array[current+1]==0 && array[current+2]==0 && current+2<=n)
		{
			int temp1=function(array,n,current+1)+1;
			int temp2=function(array,n,current+2)+1;
			return min(temp1,temp2);
		}
		else if(array[current+1]==0 && array[current+2]==1 && current+2<=n)
		{
			int temp=function(array,n,current+1)+1;
			return temp;
		}
		else if(array[current+1]==1 && array[current+2]==0 && current+2<=n)
		{
			int temp=function(array,n,current+2)+1;
			return temp;
		}
		else if(array[current+1]==0 && current+1<=n)
		{
			int temp1=function(array,n,current+1)+1;
			//int temp2=function(array,n,current+2)+1;
			return temp1;
		}
		else
			return 0;
	}
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	scanf("%d",&n);
	char s[n];
	int arr[n],flag=0,count=0,flag1=0;
	scanf("%s",s);
	//memset(arr,0,sizeof(arr));
	if(s[0]=='U')
		arr[0]=1;
	else
		arr[0]=-1;
	for(i=1;i<n;i++)
	{
		if(s[i]=='U')
		{
			arr[i]=arr[i-1]+1;
		}
		else
			arr[i]=arr[i-1]-1;
	}
	for(i=0;i<n;i++)
	{
		//printf("%d ",arr[i]);
		if(arr[i]==0)
		{
			flag=0;
			if(flag1==1)
			{
				count++;
			}
			flag1=0;
		}
		else if(flag==0)
		{
			if(arr[i]<0)
			{
				flag1=1;
			}
			flag=1;
		}
	}
	printf("%d\n",count);
	return 0;
}
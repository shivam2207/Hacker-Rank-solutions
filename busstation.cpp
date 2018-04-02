#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int array[n],i,max=0,j,flag=0,flag1=0;
	long long int sum=0,groupsum=0;
	for(i=0;i<n;i++)
	{	
		cin >>array[i];
		sum+=array[i];
		if(array[i]>max)
			max=array[i];
	}
	for(i=max;i<=sum;i++)
	{
		if(sum%i==0)
		{	
			groupsum=0;
			flag=0;
			flag1=0;
			for(j=0;j<n;j++)
			{
				groupsum+=array[j];
				if(groupsum<i)
				{
					flag1=0;
				}
				else if(groupsum==i)
				{
					groupsum=0;
					flag1=1;
				}
				else
				{
					flag=1;
					break;
				}
			}
			if(flag==0 && flag1==1)
				cout<<i<<" ";
		}
	}
	cout<<'\n';
	return 0;
}
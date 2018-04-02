#include <iostream>
using namespace std;
long long int *kadane(int *,int,long long int *);
long long int max(long long int,long long int);
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i;
		cin >> n;
		int array[n];
		long long int *temp;
		long long int sum[2]={0};
		for(i=0;i<n;i++)
		{
			cin >> array[i];
		}
		temp=kadane(array,n,sum);
		cout<<temp[0]<<" "<<temp[1]<<endl;
	}
	return 0;
}

long long int * kadane(int array[],int n, long long int sum[])
{
	long long int maximum=array[0];
	sum[0]=array[0];
	int i;
	if(array[0]>0)
		sum[1]=array[0];
	for(i=1;i<n;i++)
	{
		if(array[i]>0)
			sum[1]+=array[i];

		sum[0]+=array[i];
		if(array[i]>sum[0])
			sum[0]=array[i];
		if(sum[0]>maximum)
			maximum=sum[0];
	}
	sum[0]=maximum;
	if(sum[0]<0)
		sum[1]=sum[0];
	return sum;
}

long long int max(long long int a,long long int b)
{
	if(a>b)
		return a;
	else
		return b;
}
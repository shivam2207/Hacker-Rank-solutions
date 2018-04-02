#include <iostream>
#include <cstring>
using namespace std;
int n;
void fuct(int *,long ,long,int);
int flag=0;
int table[100001]={0};
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(table,0,sizeof(table));
		cin >> n;
		int array[n],i;
		long sum1=0,sum2=0;
		flag=0;
		for(i=0;i<n;i++)
		{
			cin >> array[i];
		}
		int mid=n/2;
		for (i=0;i<mid;++i)
		{
			sum1+=array[i];
		}
		for(i=mid+1;i<=n-1;i++)
		{
			sum2+=array[i];
		}
		if(n!=1)
			fuct(array,sum1,sum2,mid);
		if(n==1)
			flag=1;
		if(flag==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}

void fuct(int array[],long sum1,long sum2,int mid)
{
	//cout<<"mid="<<mid<<endl;
	//cout<<"sum1="<<sum1<<endl;
	//cout<<"sum2="<<sum2<<endl;
	if(flag==1)
	{
		//cout<<"hello1"<<endl;
		return;
	}
	if(mid==0 || mid==n-1)
	{
		//cout<<"hello2"<<endl;
		return;
	}
	if(sum1==sum2)
	{
		//cout<<"hello3"<<endl;
		flag=1;
		return;
	}
	if(table[mid]==1)
	{
		//cout<<"hello4"<<endl;
		return;
	}
	
	if(table[mid]==0)
	{
		//cout<<"hello5"<<endl;
		table[mid]=1;
	}
	if(sum1>sum2)
	{
		//cout<<"hello6"<<endl;
		sum1=sum1-array[mid-1];
		sum2=sum2+array[mid];
		fuct(array,sum1,sum2,mid-1);
	}
	else
	{
		//cout<<"hello7"<<endl;
		sum1=sum1+array[mid];
		sum2=sum2-array[mid+1];
		fuct(array,sum1,sum2,mid+1);
	}
}
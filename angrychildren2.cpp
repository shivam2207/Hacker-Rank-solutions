#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>
using namespace std;
bool compare (long long a, long long b)
{
	return a<b;
}

long long table[100001]={0};
long long solve(long long arr[], int n, int k)
{
	int i,j,mul;
	long long sum=0,minimum;
	for(i=1;i<=n-k+1;i++)
	{
		sum=0;
		mul=-k+1;
		for(j=i;j<=i+k-1;j++)
		{
			sum+=(mul*arr[j]);
			mul+=2;
		}
		table[i]=sum;
		if(i==1)
		{
			minimum=sum;
		}
		else
		{
			if(sum<minimum)
				minimum=sum;
		}
	}
	//sum=*min_element(table+1,table+n-k+2,compare);
	//return sum;
	return minimum;
}

int main() 
{
	int n,k,i;
	cin >> n >> k;
	long long arr[n+1];
	long long sum;
	for(i=1;i<=n;i++)
	{
		cin >> arr[i];
	}
	sort(arr+1,arr+n+1);
	cout<<sum<<endl;
	return 0;
}
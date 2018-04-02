#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int n;
long long int prefixsum[16385];
long long int array[16385];
long long int function(int ,int);
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int i;
		cin >> n;
		memset(prefixsum,0,sizeof(prefixsum));
		memset(array,0,sizeof(array));
		long long int ans;
		for(i=0;i<n;i++)
		{
			cin >> array[i];
			//array[i]=i;
			if(i==0)
				prefixsum[i]=array[i];
			else
				prefixsum[i]=prefixsum[i-1]+array[i];
		}
		ans=function(0,n-1);
		cout << ans <<endl;
	}
	return 0;
}

long long int function(int strat,int end)
{
	int i=0,flag=0;
	long long int temp1=0,temp2=0;
	if(strat>=n || end >=n || strat<0)
		return 0;
	if(strat==end)
		return 0;
	for(i=strat;i<=end;i++)
	{
		if(strat==0)
		{	
			if(prefixsum[i]==(prefixsum[end]-prefixsum[i]))
			{
				flag=1;
				break;
			}
		}
		else
		{
			if((prefixsum[i]-prefixsum[strat-1])==(prefixsum[end]-prefixsum[i]))
			{
				flag=1;
				break;
			}	
		}
	}
	if(flag==0)
	{
		return 0;
	}
	else
	{
		temp1=function(strat,i)+1;
		temp2=function(i+1,end)+1;
		return max(temp2,temp1);
	}
}
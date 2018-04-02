#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n,i,j;
	cin >> n;
	long long c[n],b[n],count=0;
	long long cumsumc[n],cumsumb[n];
	for(i=0;i<n;i++)
	{
		cin >> c[i];
		if(i>0)
			cumsumc[i]=c[i]+cumsumc[i-1];
		else
			cumsumc[i]=c[i];
	}
	for(i=0;i<n;i++)
	{
		cin >> b[i];
		if(i>0)
			cumsumb[i]=b[i]+cumsumb[i-1];
		else
			cumsumb[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		if(c[i]>=b[i])
		{
			count++;
		}
		if(cumsumc[i]>=cumsumb[i] && i!=0)
		{
			count++;
		}
		for(j=0;j<i-1;j++)
		{
			if(cumsumc[i]-cumsumc[j]>=cumsumb[i]-cumsumb[j])
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;	
}
#include <iostream>
#include <algorithm>
using namespace std;
#define mod 1000000007
long long int oddsum(long long int n);
long long int evensum(long long int n);
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n,sum=0,temp=0;
		cin >> n;
		if(n==1)
			cout << 1 << endl;
		else if(n==2)
			cout << 3 <<endl;
		else
		{
			if(n%2!=0)
			{
				sum=(sum+(n*(n+1)/2))%mod;
				n=n-2;
				sum=(sum+(n*(n+1)/2))%mod;
				n=n-2;
				while(n>0)
				{
					temp=temp+oddsum(n);
					temp=temp%mod;
					n=n-2;
				}
				sum=(sum+temp)%mod;
				cout<<sum<<endl;
			}
			else
			{
				sum=(sum+(n*(n+1)/2)%mod)%mod;
				n=n-2;
				sum=(sum+(n*(n+1)/2)%mod)%mod;
				n=n-2;
				while(n>0)
				{
					temp=temp+evensum(n);
					temp=temp%mod;
					n=n-2;
				}
				sum=(sum+temp)%mod;
				cout<<sum<<endl;	
			}
		}
	}
	return 0;
}

long long int oddsum(long long int n)
{
	long long int temp;
	temp = n/2+1;
	return (temp*temp)%mod;
}

long long int evensum(long long int n)
{
	n=n/2;
	return (n*(n+1))%mod;
}
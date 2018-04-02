#include <iostream>
using namespace std;
#define mod 1000000007
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long int n,sum;
		cin >> n;
		n=n%mod;
		sum=(n*n)%mod;
		cout<<sum<<endl;
	}
	return 0;
}
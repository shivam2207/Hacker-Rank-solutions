#include <iostream>
using namespace std;
#define mod 100000
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i;
		cin >> n;
		int product=1;
		for(i=0;i<n;i++)
		{
			product*=2;
			if(product>=mod)
			{
				product=product%mod;
			}
		}
		cout<<product-1<<endl;	
	}
	return 0;
}
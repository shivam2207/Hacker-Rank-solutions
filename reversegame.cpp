#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(n%2==0)
		{	
			if(k<n/2)
			{
				cout<<1+k*2<<endl;
			}
			else
			{
				cout<<(n-2)-(k-n/2)*2<<endl;
			}
		}
		else
		{
			if(k<n/2)
			{
				cout<<1+k*2<<endl;
			}
			else 
			{
				cout<<(n-1)-(k-n/2)*2<<endl;
			}
		}
	}
	return 0;
}
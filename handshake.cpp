#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long int ans;
		ans=n*(n-1)/2;
		cout<<ans<<endl;
	}
	return 0;
}
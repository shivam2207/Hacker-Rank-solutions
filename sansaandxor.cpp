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
		int array[n],i,ans=0;
		for(i=0;i<n;i++)
		{
			cin >> array[i];
		}
		if(n%2==0)
			ans=0;
		else
		{
			for(i=0;i<n;i++)
			{
				if(i%2==0)
				{
					ans=ans^array[i];
				}
			}
		}
		cout << ans <<endl;
	}
	return 0;
}
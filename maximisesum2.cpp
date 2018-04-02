#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i;
		long long int m;
		cin >> n >> m;
		long long int array[n],ans=0,sum=0;
		for(i=0;i<n;i++)
		{
			cin >> array[i];
		}
		set<long long int> s;
		set<long long int> :: iterator it;
		s.insert(0);
		for(i=0;i<n;i++)
		{
			sum=sum+array[i];
			sum=sum%m;
			it=s.upper_bound(sum);
			if(it!=s.end())
				ans=max(ans,sum-*it+m);
			else
				ans=max(ans,sum);
			s.insert(sum);
		}
		cout<<ans<<endl;
	}
	return 0;
}
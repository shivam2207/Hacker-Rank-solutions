#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int array[n],i,j,count=0;
		for(i=0;i<n;i++)
		{
			cin >> array[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(array[i]>array[j])
					count++;
			}
		}
		if(count%2==0)
			cout <<"YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
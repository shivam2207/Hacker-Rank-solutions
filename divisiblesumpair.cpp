#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n , k;
	cin >> n >> k;
	int array[n],i,j,count=0;
	for(i=0;i<n;i++)
		cin >> array[i];
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((array[i]+array[j])%k==0)
				count++;
		}
	}
	cout << count << endl;
	return 0;
}	
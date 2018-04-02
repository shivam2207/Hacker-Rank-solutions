#include <iostream>
using namespace std;
int main()
{
	int n,k,q,i;
	cin >> n >> k >> q;
	int array[n],temp;
	for(i=0;i<n;i++)
	{
		temp=(i+k)%n;
		cin >> array[temp];
	}
	while(q--)
	{
		int t;
		cin >> t;
		cout << array[t]<<endl;
	}
	return 0;
}
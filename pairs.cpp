#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool comparefunc(long long a, long long b)
{
	return a<b;
}
int main()
{
	int n,i;
	long long k;
	cin >> n >> k;
	long long array[n],count=0;
	for(i=0;i<n;i++)
	{
		cin >> array[i];
	}
	sort(array,array+n,comparefunc);
	for(i=0;i<n-1;i++)
	{
		// if(array[i]==k)
			// count++;
		if(binary_search(array,array+n,abs(k+array[i]),comparefunc))
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int array[n],i,minimum,maximum,fair;
	for(i=0;i<n;i++)
		cin >> array[i];
	sort(array,array+n);
	minimum=*min_element(array,array+k);
	maximum=*max_element(array,array+k);
	fair=maximum-minimum;
	for(i=1;i<=n-k;i++)
	{
		minimum=array[i];
		maximum=array[i+k-1];
		fair=min(fair,maximum-minimum);
	}
	cout << fair <<endl;
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,i;
	cin >> n;
	int array[n],count=0,weight;
	for(i=0;i<n;i++)
	{
		cin >> array[i];
	}
	sort(array,array+n);
	weight=-1;
	for(i=0;i<n;i++)
	{
		if(array[i]>weight)
		{
			weight=array[i]+4;
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
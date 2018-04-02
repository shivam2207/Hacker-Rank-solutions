#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int n,m,i,minimum;
	cin >> n;
	int list1[n];
	int array1[101]={0};
	int array2[101]={0};
	for(i=0;i<n;i++)
	{
		cin >> list1[i];
		if(i==0)
			minimum=list1[0];
		else
		{
			if(minimum>list1[i])
				minimum=list1[i];
		}
	}
	for(i=0;i<n;i++)
	{
		array1[list1[i]-minimum]++;
	}
	cin >> m;
	int list2[m];
	for(i=0;i<m;i++)
	{
		cin >> list2[i];
		array2[list2[i]-minimum]++;
	}
	for(i=0;i<101;i++)
	{
		if(abs(array1[i]-array2[i])!=0)
			cout<<minimum+i<<" ";
	}
	cout<<"\n";
	return 0;
}
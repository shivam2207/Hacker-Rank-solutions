#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i;
	cin >> n >> k;
	int arr[n],e=100,index=0;
	for(i=0;i<n;i++)
		cin >> arr[i];
	index=(index+k)%n;
	e-=1;
	if(arr[index]==1)
		e-=2;
	while(index!=0)
	{
		index=(index+k)%n;
		e-=1;
		if(arr[index]==1)
			e-=2;		
	}
	cout << e << endl;
	return 0;
}
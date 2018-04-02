#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arraya[n],arrayb[n],i,arrayc[n],ans;
	for(i=0;i<n;i++)
	{
		cin >> arraya[i];
	}
	for(i=0;i<n;i++)
	{
		cin >> arrayb[i];
	}
	sort(arraya,arraya+n);
	sort(arrayb,arrayb+n);
	int *p=set_intersection(arraya,arraya+n,arrayb,arrayb+n,arrayc);
	ans=p-arrayc;
	if(ans<n)
	{
		ans=ans+1;
	}
	else
	{
		ans=ans-1;
	}
	cout <<ans<<endl;
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int array[n],temp1[n],temp2[n],sum=0,i;
	for(i=0;i<n;i++)
		cin>>array[i];
	temp1[0]=1;
	for(i=1;i<n;i++)
	{
		if(array[i]>array[i-1])
			temp1[i]=temp1[i-1]+1;
		else
			temp1[i]=1;
	}
	temp2[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		if(array[i]>array[i+1])
			temp2[i]=temp2[i+1]+1;
		else
			temp2[i]=1;
	}
	for(i=0;i<n;i++)
	{
		sum+=max(temp1[i],temp2[i]);
	}
	cout << sum << endl;
	return 0;
}
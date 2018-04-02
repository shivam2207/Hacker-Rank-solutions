#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
unsigned long long int search(unsigned long long int *,unsigned long long int);
int main()
{
	int t,i;
	cin >> t;
	unsigned long long int array[64];
	array[0]=1;
	for(i=1;i<64;i++)
	{
		array[i]=array[i-1]*2;
	}
	while(t--)
	{
		unsigned long long int n,temp;
		cin >>n;
		int chance=0;
		while(n>1)
		{
			chance++;
			if(binary_search(array,array+64,n))
			{
				n=n/2;
			}
			else
			{
				temp=search(array,n);
				n=n-temp;
			}
		}
		if(chance%2==0)
			cout<<"Richard"<<endl;
		else
			cout<<"Louise"<<endl;
	}
	return 0;
}
unsigned long long int search(unsigned long long int *array,unsigned long long int n)
{
	int i;
	for(i=0;i<64;i++)
	{
		if(array[i]>n)
			break;
	}
	return array[i-1];
}
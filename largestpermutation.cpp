#include <iostream>
#include <algorithm>
using namespace std;
typedef struct data
{
	int number;
	int position;

}data;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int n;
	long int k;
	cin >> n >> k;
	int array[n],i,pos,temp;
	data dataarray[n];
	for(i=0;i<n;i++)
	{
		cin >> array[i];
		dataarray[array[i]-1].number=array[i];
		dataarray[array[i]-1].position=i;
	}
	for(i=0;i<k && i<n;i++)
	{
		if(array[i]!=(n-i))
		{
			pos=dataarray[n-i-1].position;
			temp=array[i];
			swap(array+i,array+pos);
			dataarray[n-i-1].position=i;
			dataarray[temp-1].position=pos;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
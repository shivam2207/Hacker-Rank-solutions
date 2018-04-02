#include <iostream>
#include <algorithm>
using namespace std;

typedef struct burger
{
	int process_time;
	int order_time;
	int orderno;
	int completion_time;
}burger;

bool myfunc(burger a,burger b)
{
	return(a.completion_time<b.completion_time);
}

int main()
{
	int n,i;
	cin >> n;
	burger array[n];
	for(i=0;i<n;i++)
	{
		cin>>array[i].order_time>>array[i].process_time;
		array[i].orderno=i+1;
		array[i].completion_time=array[i].order_time+array[i].process_time;
	}
	sort(array,array+n,myfunc);
	for(i=0;i<n;i++)
	{
		cout<<array[i].orderno<<" ";
	}
	cout<<"\n";
	return 0;
}
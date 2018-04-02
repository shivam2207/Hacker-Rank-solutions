#include <bits/stdc++.h>
using namespace std;
typedef struct data
{
	int value;
	int index;
}data;
bool compare(data a,data b)
{
	if(a.value==b.value)
	{
		if(a.index > b.index)
			return false;
		else
			return true;
	}
	else
		return a.value > b.value;
}
int main()
{
	int n,m,k;
	cin >> k >> m >> n;
	int i,temp;
	data array[m];
	for(i=0;i<m;i++)
	{
		array[i].index=i;
		array[i].value=0;
	}
	for(i=0;i<n;i++)
	{
		cin >> temp;
		array[temp].value++;
	}
	sort(array,array+m,compare);
	for(i=0;i<k;i++)
		cout << array[i].index << endl;
	return 0;
}
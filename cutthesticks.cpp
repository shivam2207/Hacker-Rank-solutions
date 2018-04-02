#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,i,temp,limit=0;
	cin >> n;
	int array[1001]={0};
	for(i=0;i<n;i++)
	{
		cin >> temp;
		if(temp>limit)
			limit=temp;
		array[temp]++;
	}
	cout<<n<<endl;
	//cout << "limit="<<limit <<endl;
	for(i=1;i<limit;i++)
	{
		if(array[i]!=0)
		{
			n=n-array[i];
			cout<<n<<endl;	
		}
	}
	return 0;
}
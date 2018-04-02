#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int array[100001],i,temp1,temp2;
	array[0]=-1;
	array[1]=-1;
	array[2]=-1;
	array[3]=3;
	array[4]=-1;
	array[5]=0;
	array[6]=6;
	array[7]=-1;
	array[8]=3;

	for(i=9;i<=100000;i++)
	{
		temp1=-1;
		temp2=-1;
		if(i%3==0)
			array[i]=i;
		else
		{
			if(array[i-3]!=-1)
				temp1=array[i-3]+3;
			if(array[i-5]!=-1)
				temp2=array[i-5];
			temp1=max(temp1,temp2);
			array[i]=temp1;
		}		
	}
	// for(i=0;i<=20;i++)
	// {
	// 	cout << "i="<<i<<" "<<array[i]<<" ";
	// }
	// cout << "\n";
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(array[n]==-1)
			cout <<-1<<endl;
		else
		{
			for(i=1;i<=array[n];i++)
				cout<<5;
			for(i=array[n]+1;i<=n;i++)
				cout<<3;
			cout<<"\n";
		}
	}
	return 0;
}
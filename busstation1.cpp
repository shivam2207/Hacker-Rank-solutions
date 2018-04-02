#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int array[n],i,max=0,j,flag=0;
	long long int sum=0,cumsum[n];
	for(i=0;i<n;i++)
	{	
		cin >>array[i];
		sum+=array[i];
		cumsum[i]=sum;
		if(array[i]>max)
			max=array[i];
	}
	vector<long long int> v;
	for(i=max;i<=sum/2;i++)
	{
		if(sum%i==0)
		{
			v.push_back(i);
		}
	}
	for(i=0;i<(int)v.size();i++)
	{
		flag=0;
		for(j=0;j<n;j++)
		{
			if(cumsum[j]<v[j])
			{

			}
			else if(cumsum[j]%v[i]!=0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<v[i]<<" ";
	}
	cout<<sum<<endl;
	return 0;
}
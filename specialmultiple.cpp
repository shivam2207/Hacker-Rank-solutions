#include <iostream>
#include <vector>
using namespace std;
#define max 1000000000000
int main()
{
	vector<long long int> v;
	v.push_back(9);
	long long int temp=0;
	int i=0;
	while(temp<max)
	{
		temp=v[i]*10;
		v.push_back(temp);
		temp=temp+9;
		v.push_back(temp);
		i++;
	}
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for(i=0;i<(int)v.size();i++)
		{
			if(v[i]%n==0)
			{
				cout<<v[i]<<endl;
				break;
			}
		}
	}
	return 0;
}
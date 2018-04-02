#include <iostream>
#include <vector>

using namespace std;
#define maxsize 100001
bool seive[maxsize]={false};
vector<int> v;

int main()
{
	int t,i,j;
	for(i=2;i*i<maxsize;i++)
	{
		if(seive[i]==false)
		{
			for (j=i*i;j<maxsize;j+=i)
			{
				seive[j]=true;
			}
		}
	}
	for(i=2;i<maxsize;i++)
	{
		if(seive[i]==false)
			v.push_back(i);
	}
	cin >> t;
	while(t--)
	{
		vector<long int> primefactor;
		int count=0;
		long int n,product=1;
		cin>> n;
		if(n%2!=0)
		{
			cout<<0<<endl;
		}
		else
		{
			i=0;
			while(n>1 && i<(int)v.size())
			{
				count=0;
				while(n%v[i]==0)
				{
					count++;
					n=n/v[i];
				}
				primefactor.push_back(count);
				i++;
			}
			if(n>1)
			{
				primefactor.push_back(1);
			}
			for(i=0;i<(int)primefactor.size();i++)
			{
				if(i==0)
				{
					product*=primefactor[i];
				}
				else
				{
					product=product*(primefactor[i]+1);
				}
			}
			cout<<product<<endl;
		}
	}
	return 0;
}
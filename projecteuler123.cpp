#include <iostream>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

//#define max 2617500
#define max 1000000
bool seive[max]={false};
long int v[max]={0};
map<long int,long int> mymap;
int main()
{
	long long int i,j;
	
	seive[0]=true;
	seive[1]=true;
	
	for(i=2;i*i<max;i++)
	{
		if(seive[i]==false)
		{
			for(j=i*i;j<max;j+=i)
			{
				seive[j]=true;
			}
		}
	}
	for(i=0,j=0;i<max;i++)
	{
		if(seive[i]==false)
		{
			v[j]=i;
			j++;
			mymap[i]=j;
		}
	}
	int t;
	cin >> t;
	while(t--)
	{
		long long int b;
		cin >> b;
		long long int temp;
		temp=sqrt(b);
		for(i=temp;i<max;i++)
		{
			if(seive[i]==false)
				break;
		}
		i=mymap.find(i)->second;
		while(temp<b)
		{
			if(i%2==0)
			{
				i++;
			}
			else
			{
				temp=(2*i*v[i-1])%(v[i-1]*v[i-1]);
				i+=2;
			}
		}
		i-=2;
		cout<<i<<endl;
	}
	return 0;
}
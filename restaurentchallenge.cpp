#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int l,b,area,i,min,max=1;
		cin >> l>>b;
		if(l==b)
		{
			cout<<1<<endl;
		}
		else
		{
			area=l*b;
			if(l<b)
				min=l;
			else
				min=b;

			for(i=2;i<=min;i++)
			{
				if(area%(i*i)==0 && b%i==0 && l%i==0)
					max=i;
			}
			//cout<<"max="<<max<<endl;
			max=area/(max*max);
			cout<<max<<endl;
		}
	}
	return 0;
}
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,j,flag=0;
		long long m;
		cin >> n >> m;
		long long array[n],cumsum[n],rem=0;
		long long int temp;
		for(i=0;i<n;i++)
		{
			cin >> array[i];
			array[i]=array[i]%m;
			if(array[i]==m-1)
				flag=1;
			if(i==0)
				cumsum[i]=array[i];
			else
			{
				cumsum[i]=(cumsum[i-1]+array[i])%m;
			}
			if(cumsum[i]==m-1)
				flag=1;
		}
		if(flag==1)
			cout << m-1 << endl;
		else
		{
			for(i=0;i<n;i++)
			{
				rem=max(cumsum[i],rem);
				for(j=i+1;j<n;j++)
				{
					temp=cumsum[j]-cumsum[i];
					if(temp<0)
						temp=m+temp;
					rem=max(rem,temp);
					if(rem==m-1)
						break;
				}
				if(rem==m-1)
					break;
			}
			cout<<rem<<endl;
		}
	}
	return 0;
}
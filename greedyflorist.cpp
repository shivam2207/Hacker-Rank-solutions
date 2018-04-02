#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	int cost[n],i,totalsum=0,mulfac=0,totalcost=0;
	for(i=0;i<n;i++)
	{
		cin >> cost[i];
		totalsum+=cost[i];
	}
	if(k>=n)
	{
		cout << totalsum << endl;
	}
	else
	{
		sort(cost,cost+n,greater<int>());
		for(i=0;i<n;i++)
		{
			//cout<<"i="<<i<<endl;
			if(i%k==0)
			{
			//	cout << "mulfac=" << mulfac <<endl; 
				mulfac++;
			}
			totalcost+=mulfac*cost[i];
			//cout<< "totalcost="<<totalcost<<endl;
		}
		cout<<totalcost<<endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,a,b,flag=0;
		cin >> n;
		int domain[501]={0},range[501]={0};
		for(i=0;i<n;i++)
		{
			cin >> a >> b;
			domain[a]++;
			range[b]++;
		}
		for(i=0;i<=500;i++)
		{
			if(domain[i]>1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout << "NO" <<endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
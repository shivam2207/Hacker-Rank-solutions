#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,i;
		cin >> n;
		long long int array[n];
		for(i=0;i<n;i++)
			cin >> array[i];
		int grundy[]={0,0,1,1,2,2,3,3,4},sol=0;
		for(i=0;i<n;i++)
		{
			sol^=grundy[array[i]%9];
		}
		if(sol==0)
			cout << "Sandy" << endl;
		else
			cout << "Mansa" << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int i,array[n],j,count=0;
		bool flag=false;
		for(i=0;i<n;i++)
			cin >> array[i];
		for(i=0;i<n;i++)
		{
			if(array[i]-1-i>2)
			{
				flag=true;
				break;
			}
		}
		if(flag)
			cout << "Too chaotic" << endl;
		else
		{
			for(i=0;i<n-1;i++)
			{
				flag=true;
				for(j=0;j<n-i-1;j++)
				{
					if(array[j]>array[j+1])
					{
						flag=false;
						swap(array[j],array[j+1]);
						count++;
					}
				}
				if(flag)
					break;
			}
			cout << count << endl;
		}
	}
	return 0;
}
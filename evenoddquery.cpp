#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cin >> n;
	int array[n];
	for(i=0;i<n;i++)
	{
		cin >> array[i];
	}
	int q;
	cin >> q;
	while(q--)
	{
		int x,y;
		cin >> x >> y;
		if(x==n)
		{
			if(array[x-1]%2==0)
				cout << "Even"<<endl;
			else
				cout << "Odd"<<endl;
		}
		else if(x==y)
		{
			if(array[x-1]%2==0)
				cout << "Even" << endl;
			else
				cout << "Odd" <<endl;
		}
		else if((array[x-1])%2==0 && array[x]!=0)
			cout << "Even"<<endl;
		
		else
			cout << "Odd" <<endl;
	}
	return 0;
}
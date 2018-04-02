#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--)
		{
		int n;
		cin >> n;
		int i,sol=0,temp;
		for(i=0;i<n;i++)
			{
			cin >> temp;
			sol^=temp;
		}
		if(n==1)
		{
			if(temp%2==0)
				cout<<"Second"<< endl;
			else
				cout << "First" << endl;
		}
		else
		{
			if(sol==0)
				cout <<"Second" << endl;
			else
				cout <<"First" << endl;
		}
	}
	return 0;
}
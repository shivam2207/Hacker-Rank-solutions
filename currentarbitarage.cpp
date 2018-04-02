#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		double ue,eg,gu,st=100000;
		cin >> ue >> eg >> gu;
		double f1,f2,f3;
		if(ue >1 && eg > 1 && gu > 1)
			cout << "0" << endl;
		else
		{	
			f1=floorf((st/ue)*10000)/10000;
			//cout <<f1 << endl;
			f2=floorf((f1/eg)*10000)/10000;
			//cout <<f2 << endl;
			f3=floorf((f2/gu)*10000)/10000;
			//cout <<f3 << endl;
			if(f3>st)
				cout << floor(f3-st) << endl;
			else
				cout <<"0"<< endl;
		}
	}
	return 0;
}
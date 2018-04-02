#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>

using namespace std;
int main()
{
	long int l,s1,s2,relspeed;
	cin >> l >> s1 >> s2;
	relspeed=s1-s2;
	if(relspeed<0)
		relspeed=-relspeed;
	int q;
	cin >> q;
	while(q--)
	{
		long long int query;
		cin >> query;
		if(l==sqrt(query))
		{
			cout<<"0.0000"<<endl;
		}
		else
		{	
			long double length=sqrt(2)*sqrt(query);
		//cout << "length="<<length<<endl;
			long double timeinterval;
			long double dist=(sqrt(2)*l)-length;
		//cout<<"dist="<<dist<<endl;
			timeinterval=dist/relspeed;
			cout<<setprecision(15)<<timeinterval<<endl;
		}
	}
	return 0;
}
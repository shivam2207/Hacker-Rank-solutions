#include <iostream>
using namespace std;
int main()
{
	int n,i=3;
	long long int a,b,c;
	cin >> a >> b >> n;
	while(i<=n)
	{
		c=b*b+a;
		a=b;
		b=c;
		i++;
	}
	cout << c<<endl;
	return 0;
}
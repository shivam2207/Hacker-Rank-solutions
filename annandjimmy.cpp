#include <iostream>
using namespace std;
int main()
{
	int n,temp;
	cin >> n;
	long int vol;
	if(n%3==0)
	{
		temp=n/3;
		vol=temp*temp*temp;
	}
	else if(n%3==2)
	{
		temp=(n/3)+1;
		vol=temp*temp*(temp-1);
	}
	else
	{
		temp=n/3;
		vol=temp*temp*(temp+1);
	}
	cout<<vol<<endl;
	return 0;
}
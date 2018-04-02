#include <iostream>
using namespace std;
int main()
{
	int a[6],i,op1,op2,op3,ans1=100,ans2=100,ans3=100,ans,flag=0;

	for(i=0;i<6;i++)
	{
		cin >> a[i];
	}
	op1=a[0]+a[1]+a[2]+a[3];
	op2=a[0]+a[1]+a[5];
	op3=a[0]+a[3]+a[4];
	if(op1<0)
	{
		ans1=-op1;
		flag=1;
	}
	if(op2<0)
	{
		ans2=-op2;
		flag=1;
	}
	if(op3<0)
	{
		ans3=-op3;
		flag=1;
	}
	if(flag==0)
		cout<<0<<endl;
	else
	{
		ans=ans1;
		if(ans>ans2)
			ans=ans2;
		if(ans>ans3)
			ans=ans3;
		cout<<ans<<endl;
	}
	return 0;
}
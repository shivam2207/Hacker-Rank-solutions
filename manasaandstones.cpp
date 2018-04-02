#include <bits/stdc++.h>
using namespace std;
set <int> st;
void func(int,int,int,int,int);
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		st.clear();
		int n,a,b;
		cin >> n >> a >> b;
		func(n,a,b,0,0);
		set <int> :: iterator it;
		for(it=st.begin();it!=st.end();it++)
			cout <<*it<<" ";
		cout<<"\n";
	}
	return 0;
}

void func(int n,int a,int b,int sum,int i)
{
	if(i==n-1)
	{
		st.insert(sum);
		return;
	}
	else
	{
		func(n,a,b,sum+a,i+1);
		func(n,a,b,sum+b,i+1);
		return ;
	}
}
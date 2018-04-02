#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mod 1000000007
#define ll long long int
#define pi pair<int,int>
#define pl pair<ll,ll>
#define ppi pair<int,pi>
#define ppl pair<ll,pl>
#define mp make_pair
#define vi vector<int>
#define vl vector<ll>
#define vp vector<pi>
#define sz 100000
ll modular_multiplication(ll x,ll n,ll y)
{
	ll res=1;
	while(y>0)
	{
		if(y & 1)
			res=(res*x)%n;
		y=y>>1;
		x=(x*x)%n;
	}
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	bool seive[sz+1]={false};
	ll i,j,n,m,flag,pr_root,total_root,limit;
	set <ll> powers;
	for(i=2;i*i<=sz;i++)
	{
		if(seive[i]==false)
		{
			for(j=i*i;j<=sz;j+=i)
			{
				seive[j]=true;
			}
		}
	}
	cin >> n;
	m=n-1;
	for(i=2;i*i<=m;i++)
	{
		if(seive[i]==false && m%i==0)
		{
			powers.insert(m/i);
		}
	}
	for(i=2;i<m;i++)
	{
		flag=0;
		for(auto p:powers)
		{
			if(modular_multiplication(i,n,p)==1)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			break;
		}
	}
	//cout << i << endl;
	pr_root=i;
	cout << pr_root <<" ";
	total_root=m;
	limit=ceil(sqrt(m));
	//cout <<"limit: "<<limit << endl;
	for(i=2;i<=limit && m!=1;i++)
	{
		if(seive[i]==false && m%i==0 && i<=m)
		{
			while(m%i==0)
			{
				m=m/i;
			}
			//cout <<"I:"<<i<<endl;
			total_root=(total_root/i)*(i-1);
		}
	}
	if(m!=1)
		total_root=(total_root/m)*(m-1);
	cout << total_root << endl;
	return 0;
}
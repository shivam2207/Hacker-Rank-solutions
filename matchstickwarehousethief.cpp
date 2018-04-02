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
#define vpl vector<pl>
typedef struct box
{
	int b,m;
}box;
bool compare(box a, box b)
{
	return a.m>b.m;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	ll n,c,sol=0;
	int i;
	cin >> n >> c;
	box data[c];
	for(i=0;i<c;i++)
	{
		cin >> data[i].b >> data[i].m;
	}
	sort(data,data+c,compare);
	// for(i=0;i<c;i++)
	// {
	// 	cout << data[i].b <<" "<< data[i].m<<endl;
	// }
	for(i=0;i<c;i++)
	{
		if(n<=0)
		{
			break;
		}
		else
		{
			if(data[i].b<=n)
			{
				n=n-data[i].b;
				sol+=data[i].b*data[i].m;
				//cout << "i:"<<i<<" n:"<<n<<" sol:"<<sol<<endl; 
			}
			else
			{
				//cout << "i:"<<i<<" n:"<<n<<" sol:"<<sol<<endl;
				sol+=n*data[i].m;
				n=0;
			}
		}
	}
	cout << sol << endl;
	return 0;
}
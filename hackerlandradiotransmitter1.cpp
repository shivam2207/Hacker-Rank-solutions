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
int main()
{
	ios_base::sync_with_stdio(false);
	int n,k,i,cnt=0,pos,t;
	cin >> n >> k;
	set <int> st;
	for(i=0;i<n;i++)
	{
		cin >> t;
		st.insert(t);
	}
	vi vec(st.begin(),st.end());
	n=st.size();
	pos=0;
	while(pos<n)
	{
		if(pos==n-1)
		{
			cnt++;
			break;
		}
		auto low=lower_bound(vec.begin()+pos,vec.end(),vec[pos]+k);
		if(low==vec.end())
		{
			cnt++;
			break;
		}	
		else if(*low> vec[pos]+k)
			low--;
		pos=low-vec.begin();		
		low=lower_bound(vec.begin()+pos,vec.end(),vec[pos]+k);
		if(low==vec.end())
		{
			cnt++;
			break;
		}
		if(*low>vec[pos]+k)
			low--;
		pos=low-vec.begin();
		
		cnt++;
		pos++;
	}
	cout << cnt <<endl;
	return 0;
}
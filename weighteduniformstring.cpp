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
	cin.tie(0);
	string s;
	cin >> s;
	int i,n,t,curr=1,m;
	set <int> st;
	n=s.size();
	t=s[0]-'a'+1;
	st.insert(t);
	for(i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
		{
			//cout <<"i: "<<i<<endl;
			curr++;
			t=s[i]-'a'+1;
			//cout<<"t: "<<t<<" curr: "<<curr << endl;
			st.insert(t*curr);
		}
		else
		{
			curr=1;
			t=s[i]-'a'+1;
			st.insert(t*curr);
		}
	}
	cin >> m;
	while(m--)
	{
		cin >> t;
		if(st.find(t)!=st.end())
			cout <<"Yes"<<endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
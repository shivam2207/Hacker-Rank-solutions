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
		// cin >> vec[i];
		cin >> t;
		st.insert(t);
	}
	vi vec(st.begin(),st.end());
	//sort(vec.begin(),vec.end());
	for(auto it: vec)
		cout << it << " ";
	cout << endl;
	// auto it=lower_bound(vec.begin(),vec.end(),13);
	// cout <<"it: " <<it-vec.begin()<< endl;
	n=vec.size();
	pos=0;
	while(pos<n)
	{
		if(pos==n-1)
		{
			cnt++;
			break;
		}
		auto low=lower_bound(vec.begin()+pos,vec.begin(),vec[pos]+k);
		if(low==vec.end())
		{
			cnt++;
			break;
		}	
		else if(*low> vec[pos]+k)
			low--;
		pos=low-vec.begin();
		cout << "pos1: "<<pos<< endl; 
		low=lower_bound(vec.begin()+pos,vec.end(),vec[pos]+k);
		if(low==vec.end())
		{
			cnt++;
			break;
		}
		if(*low>vec[pos]+k)
			low--;
		pos=low-vec.begin();
		cout<<"pos2: "<<pos<<endl;
		cnt++;
		pos++;
		cout <<"pos3: "<<pos<<endl;
	}
	cout << cnt <<endl;
	return 0;
}
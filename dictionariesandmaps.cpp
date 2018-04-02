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
	map < string, int > dict;
	int n,num;
	cin >> n;
	//cin.ignore();
	string s;
	while(n--)
	{
		cin >> s >> num ;
		dict[s]=num; 
	}
	while(1)
	{
		cin >> s;
		if(s==NULL)
		{
			break;
		}
		if(dict.find(s)!=dict.end())
			cout << dict[s] << endl;
		else
			cout << "Not found" << endl;
	}
	return 0;
}
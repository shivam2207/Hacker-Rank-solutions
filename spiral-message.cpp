#include <bits/stdc++.h>
using namespace std;
#define ipi(n) scanf("%d",&n); 
#define ipl(n) scanf("%lld",&n);
#define pfi(n) printf("%d\n",n);
#define pfl(n) printf("%lld\n",n);
#define pfiw(n) printf("%d ",n);
#define pflw(n) printf("%lld ",n);
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

bool visit[20][20]={false};
vector < string > str;
int n,m,r,c,total=0,size=0,visit_cnt=0;
void up(void)
{
	while(r>=0 && visit[r][c]==false){
		visit[r][c]=true;
		if(str[r][c]=='#'){
			if(size>0){
				total++;
			}
			size=0;
		}
		else{
			size++;
		}
		visit_cnt++;
	//	cout << r <<" "<<c << endl;
		r--;
	}
	r++;
	c++;
	//cout << "Visit count: "<< visit_cnt << endl;
}   
void down(void)
{
	while(r<n && visit[r][c]==false){
		visit[r][c]=true;
		if(str[r][c]=='#'){
			if(size>0){
				total++;
			}
			size=0;
		}
		else{
			size++;
		}
		visit_cnt++;
		//cout << r <<" "<<c << endl;
		r++;
	}
	r--;
	c--;
	//cout << "Visit count: "<< visit_cnt << endl;
}
void left(void)
{
	while(c>=0 && visit[r][c]==false){
		visit[r][c]=true;
		if(str[r][c]=='#'){
			if(size>0){
				total++;
			}
			size=0;
		}
		else{
			size++;
		}
		visit_cnt++;
		//cout << r <<" "<<c << endl;
		c--;
	}
	c++;
	r--;
	//cout << "Visit count: "<< visit_cnt << endl;
}
void right(void)
{
	while(c<m && visit[r][c]==false){
		visit[r][c]=true;
		if(str[r][c]=='#'){
			if(size>0){
				total++;
			}
			size=0;
		}
		else{
			size++;
		}
		visit_cnt++;
		//cout << r <<" "<<c << endl;
		c++;
	}
	c--;
	r++;
	//cout << "Visit count: "<< visit_cnt << endl;
}
int main() 
{
	cin >> n >> m;
	string s;
	for(int i=0;i<n;i++)
	{
		cin >> s;
		str.push_back(s);
	}
	r=n-1;
	c=0;
	while(visit_cnt<n*m){
		up();
		right();
		down();
		left();
	}
	if(size>0)
		total++;
	cout << total << endl;
	return 0;
}

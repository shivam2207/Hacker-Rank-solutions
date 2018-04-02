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
typedef vector<int> vi;
typedef vector<ll> vl;
map <int,int> mp;
map <int,int> :: iterator it;
int main()
{
	int n;
	ipi(n);
	int arr[n],i,maxx=0,k,count,flag=0,num,cnt,mp_flag,temp,j;
	string bin[n];
	for (i=0;i<n;i++)
	{
		ipi(arr[i]);
		if(arr[i]>maxx)
			maxx=arr[i];
		bin[i]=bitset<32>(arr[i]).to_string();
	}
	string binary=bitset<32>(maxx).to_string();
	// for(i=0;i<n;i++)
	// 	cout << bin[i] << endl;
	for(i=0;i<32;i++)
	{
		if(binary[i]=='1')
			break;
	}
	k=i;
	// pfi(k);
	while(k<=31)
	{
		count=0;
		for(i=0;i<n;i++)
		{
			if(bin[i][k]=='1')
				count++;
		}
		// pfi(count);
		if(count==n/2)
		{
			flag=1;
			break;
		}
		else if(count<n/2)
		{
			// printf("hello\n");
			mp.clear();
			temp=n/2-count;
			cnt=0;
			mp_flag=0;
			for(i=0;i<n;i++)
			{
				binary=bin[i];
				for(j=31;j>k;j--)
				{
					binary[j]='0';
				}
				// printf("hello1\n");
				num=bitset<32>(binary).to_ulong();
				mp[num]++;
				if(num>0)
				{
					cnt++;
				}
			}
			if(cnt>=temp)
			{
				// printf("hello2\n");
				for(it=mp.begin();it!=mp.end();it++)
				{
					if(it->second>n/2)
						mp_flag=1;
				}
				if(mp_flag==0)
				{
					flag=1;
					break;
				}
			}
		}
		k++;
	}
	if(flag)
	{
		pfi(31-k);
	}
	else
	{
		printf("-1\n");
	}
	return 0;
}
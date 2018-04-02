#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int i,array[n],s=1;
		long long int pre_sum[n],temp;
		vector<long long int > v;
		for(i=0;i<n;i++)
			cin >> array[i];
		sort(array,array+n);
		for(i=0;i<n;i++)
		{
			if(i==0)
				pre_sum[i]=array[i];
			else
				pre_sum[i]=array[i]+pre_sum[i-1];
		}
		v.push_back(pre_sum[n-1]);
		for(i=0;i<n-1;i++)
		{
			s++;
			temp=(long long int)s*(pre_sum[n-1]-pre_sum[i]);
			v.push_back(temp);	
		}
		cout << *max_element(v.begin(),v.end())<<endl;
	}
	return 0;
}
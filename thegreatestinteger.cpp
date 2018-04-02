#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main()
{
	int n,i,j,temp,diff,m,minimum=100000000,flag=0;
	cin >> n;
	int array[100001]={0};
	vector<int> v;
	for(i=0;i<n;i++)
	{
		cin >> temp;
		//cout<<"temp="<<temp<<endl;
		array[temp]=1;
		v.push_back(temp);
	}
	cin >> m;
	for(i=0;i<(int)v.size();++i)
	{
		for(j=i+1;j<(int)v.size();++j)
		{
			diff=abs(v[i]-v[j]);
			//cout<<"diff="<<diff<<endl;
			
			if(minimum>diff)
				minimum=diff;
			if(diff==1)
			{
				flag=1;
				break;
			}
			if(array[diff]==0)
			{
				array[diff]=1;
				v.push_back(diff);
			}
		}
		if(flag==1)
			break;
	}
	//cout<<minimum<<endl;
	temp=*max_element(v.begin(),v.end());
	int k=temp/minimum;
	cout<<(k-m+1)*minimum<<endl;
	//temp=v[n-1];
	// if((v[1]-v[0])!=1)
	// {
	// 	for(i=1;i<=temp;i++)
	// 	{
	// 		if(array[i]==1)
	// 		{
	// 			for(j=i+1;j<=temp;j++)
	// 			{
	// 				if(array[j]==1)
	// 				{
	// 					diff=j-i;
	// 					array[diff]=1;
	// 				}
	// 			}
	// 		}
	// 	}
	// 	j=0;
	// 	for(i=temp;i>0;i--)
	// 	{
	// 		if(array[i]==1)
	// 			j++;
	// 		if(j==m)
	// 			break;
	// 	}
	// 	cout<<i<<endl;
	// }
	// else
	// {
	// 	cout<<temp-m+1<<endl;
	// }
	return 0;
}
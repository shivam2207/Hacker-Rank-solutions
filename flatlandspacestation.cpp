#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,m,j=0,i,temp,temp1,max=0;
	cin >> n>> m;
	if(n==m)
	{
		cout<<0<<endl;
	}
	else
	{
		vector<int> v1;
		vector<int> v2;
		for(i=0;i<m;i++)
		{
			cin >> temp;
			v1.push_back(temp);
		}
		sort(v1.begin(),v1.end());
		//for(i=0;i<m;i++)
		//	cout<<v1[i]<<endl;
		for(i=0;i<n;i++)
		{
			if(i==v1[j])
			{
				v2.push_back(0);
				if(j<m)
					j++;
			}
			else if(i<v1[j])
			{
				if(j==0)
				{
					temp=v1[j]-i;
					v2.push_back(temp);
					if(temp>max)
						max=temp;
				}
				else
				{
					temp=v1[j]-i;
					temp1=i-v1[j-1];
					if(temp1<=temp)
					{
						v2.push_back(temp1);
						if(temp1>max)
							max=temp1;
					}
					else
					{
						v2.push_back(temp);
						if(temp>max)
							max=temp;
					}
				}
			}
			else
			{
				temp=i-v1[j-1];
				//cout<<"j="<<j<<" "<<"v1[j]="<<v1[j]<<endl;
				v2.push_back(temp);
				if(temp>max)
					max=temp;
			}
		}
		//for(i=0;i<n;i++)
		//	cout<<v2[i]<<" ";
		cout<<max<<endl;
	}
	return 0;
}
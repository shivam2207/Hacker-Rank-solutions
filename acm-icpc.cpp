#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >> n >> m;
	string matrix[n];
	int i,j,count=0,total=0,k,max=-1;
	for(i=0;i<n;i++)
	{
		cin >> matrix[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			count=0;
			for(k=0;k<m;k++)
			{
				//cout << matrix[i][k] <<" "<< matrix[j][k]<< endl;
				count+=(matrix[i][k]-'0')||(matrix[j][k]-'0');
			}
			if(count>max)
			{
				max=count;
				total=1;
			}
			else if(count==max)
				total++;
		}
	}
	cout << max << endl;
	cout << total << endl;
	return 0;
} 
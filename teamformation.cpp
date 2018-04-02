#include <iostream>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int array[n],i,count=0,temp,diff,minimum=1000000000,flag=0;
		for(i=0;i<n;i++)
		{
			cin >> array[i];
		}
		sort(array,array+n);
		queue<int> q;
		temp=array[0];
		count=1;
		for(i=1;i<n;i++)
		{
			diff=array[i]-temp;
			temp=array[i];
			if(diff==1)
			{
				count++;
			}
			else if(diff==0)
			{
				q.push(array[i]);
			}
			else
			{
				flag=1;
				if(minimum>count)
					minimum=count;
				count=1;
			}
			if(minimum==1)
				break;
		}
		if(flag==0)
			minimum=count;
		if(minimum==1)
			cout << minimum <<endl;
		else if(q.empty())
			cout<<minimum<<endl;
		else
		{
			//cout<<"hello"<<endl;
			count=1;
			flag=0;
			int a=q.front(),b;
			q.pop();
			while(!q.empty())
			{
				//cout<<"hello1"<<endl;
				b=q.front();
				diff=b-a;
				if(diff==0)
				{
					q.push(b);
					q.pop();
				}
				else if(diff==1)
				{
					count++;
					a=q.front();
					q.pop();
				}
				else
				{
					flag=1;
					if(count<minimum)
						minimum=count;
					count=1;
					a=q.front();
					q.pop();
				}
				if(minimum==1)
					break;
			}
			if(flag==0)
			{
				minimum=min(minimum,count);
				cout<<minimum<<endl;
			}
			else
			{
				cout<<minimum<<endl;
			}
		}
	}
	return 0;
}
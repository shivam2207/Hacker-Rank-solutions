#include <iostream>
#include <cstring>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n,i;
		cin >> n;
		int array[n],flag=0;
		for(i=0;i<n;i++)
		{
			cin >> array[i];
		}
		if(is_sorted(array,array+n))
		{
			cout << "YES" <<endl;
		}
		else
		{
			// stack <int> mystack;
			// int temp=0;
			// mystack.push(array[0]);
			// for(i=1;i<n;i++)
			// {
			// 	if(array[i]<mystack.top())
			// 		mystack.push(array[i]);
			// 	else
			// 	{		
			// 		while(!mystack.empty() && mystack.top()<array[i])
			// 		{
			// 			temp=mystack.top();
			// 			mystack.pop();
			// 		}
			// 		mystack.push(array[i]);
			// 	}
			// 	if(array[i]<temp)
			// 	{
			// 		flag=1;
			// 		break;
			// 	}
			// }
			for(i=0;i<n-2;i++)
			{
				if(array[i]<array[i+1] && array[i+1] > array[i+2] && array[i] < array[i+2])
				{
					if(i!=0)
					{
						if(array[i-1]<array[i+1])
							flag=1;
					}
				}
				if(array[i] > array[i+1] && array[i] < array[i+2])
					flag=1;
			}
			if(flag==1)
				cout << "NO" << endl;
			else
				cout << "YES" << endl;
		}
	}
	return 0;
}
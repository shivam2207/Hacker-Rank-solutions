#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int main()
{
	int n,i,j;
	cin >> n;
	int array[n],p,q,diff,pos,max,num;
	vector <int> v;
	for(i=0;i<n;i++)
		cin >> array[i];
	cin >> p >> q;
	sort(array,array+n);
	diff=abs(array[0]-p);
	pos=0;
	for(i=1;i<n;i++)
	{
		if(abs(array[i]-p)<diff)
		{
			diff=abs(array[i]-p);
			pos=i;
		}
		else
			break;
	}
	//v.push_back(diff);
	num=p;
	max=diff;
	for(i=p+1;i<=q;i++)
	{
		diff=abs(array[pos]-i);
		for(j=pos+1;j<n;j++)
		{
			if(abs(array[j]-i)<diff)
			{
				diff=abs(array[j]-i);
				pos=j;
			}
			else
				break;
		}
		if(diff>max)
		{
			max=diff;
			num=i;
		}
		//v.push_back(diff);
	}
	cout << num <<endl;
	// max=v[0];
	// pos=0;
	// cout << "Hello" <<endl;
	// for(i=1;i<(int)v.size();i++)
	// {
	// 	if(v[i]>max)
	// 	{
	// 		max=v[i];
	// 		pos=i;
	// 	}
	// }
	// //cout <<"max="<< max <<endl;
	// cout <<p+pos<<endl;
	return 0;
}

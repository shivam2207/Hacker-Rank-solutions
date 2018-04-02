#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef struct data
{
	int month;
	int date;
}data;
long long int map[101]={0};
int decimalvalue(int ,int);
int main()
{
	int n,i,temp;
	long long int count=0;
	cin >> n;
	data array[n];
	for(i=0;i<n;i++)
	{
		cin >> array[i].month;
		cin >> array[i].date;
		temp=decimalvalue(array[i].month,array[i].date);
		if(temp!=-1)
		{
			map[temp]++;
		}
	}
	for(i=0;i<=100;i++)
	{
		if(map[i]!=0 && map[i]!=1)
		{
			//cout<<map[i]<<endl;

			count+=map[i]*(map[i]-1)/2;
			//count1=map[i]/2*(map[i]-1);
			//cout << "count1=" <<count1 <<endl;
		}
	}
	cout << count <<endl;
	return 0;
}

int decimalvalue(int radix,int value)
{
	int temp,tempval=0,flag=0,i=0;
	while(value>0)
	{
		temp=value%10;
		value=value/10;
		tempval+=temp*pow(radix,i);
		i++;
		if(temp>=radix)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		return -1;
	else
		return tempval;
}
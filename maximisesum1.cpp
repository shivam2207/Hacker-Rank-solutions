#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void create_bit(long long *,long long,long long *);
void get_update(long long *,long long,long long ,long long);
long long get_next_index(long long);
long long get_parent(long long);
long long get_sum(long long *,long long);

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n,m;
		//cout << "enter the number of element" <<endl;
		cin >> n >> m;
		long long array[n],i,j,btree[n+1],temp,rem=0;
		for(i=0;i<n;i++)
		{
			cin >> array[i];
			array[i]=array[i]%m;
		}
		memset(btree,0,sizeof(btree));
		create_bit(array,n,btree);
		for(i=0;i<n;i++)
		{	
			temp=get_sum(btree,i);
			//cout<<"i="<<i<<":"<<temp<<endl;
			rem=max(rem,temp%m);
			if(rem==m-1)
				break;
			for(j=i+1;j<n;j++)
			{
				//cout <<"i="<<i<<" "<<"j="<<j<<":";
				//cout << get_sum(btree,j)-temp<<endl;
				rem=max(rem,(get_sum(btree,j)-temp)%m);
			}
			//cout << "i="<<i<<":"<<rem << endl;
		}
		cout<<rem<<endl;
	}
	return 0;
}

void create_bit(long long input[],long long size, long long btree[])
{
	long long i;
	for(i=1;i<=size;i++)
	{
		get_update(btree,input[i-1],i,size);
	}
}

void get_update(long long btree[],long long value,long long index,long long size)
{
	while(index <= size)
	{
		btree[index]+=value;
		index=get_next_index(index);
	}
}

long long get_next_index(long long index)
{
	return index+(index & -index);
}

long long get_parent(long long index)
{
	return index-(index & -index);
}

long long get_sum(long long btree[],long long index)
{
	index+=1;
	long long sum =0;
	while (index > 0)
	{
		sum+=btree[index];
		index=get_parent(index);
	}
	return sum;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <queue>
#define mod 1000000009
using namespace std;

void printCombination(int arr[], int n, int r);

void combinationUtil(int arr[], int n, int r, int index, int data[], int i);
long long int primefactor[1000001]={0};
long long int ncount=0;

int main()
{
	int prime[1000001]={0},i,j,k,max=0;
	vector<int>v;
	prime[0]=1;
	prime[1]=1;
	for(i=2;i<=1000;i++)
	{
		if(prime[i]==0)
		{
			for(j=i*i;j<=1000000;j+=i)
			{
				prime[j]=1;
			}
		}
	}
	for(i=0;i<=1000000;i++)
	{
		if(prime[i]==0)
			v.push_back(i);
	}
	

	int n;
	cin >> n;
	int array[n];
	for(i=0;i<n;i++)
	{	
		cin>>array[i];
		if(array[i]>max)
			max=array[i];
	}
	for(i=2;i<=max;i++)
	{
		if(prime[i]==0)
		{
			primefactor[i]=1;
		}
		else
		{
			j=0;
			k=i;
			while(k>1)
			{
				while(k%v[j]==0)
				{
					k=k/v[j];
					primefactor[i]++;
				}
				j++;
			}
		}
		primefactor[i]=primefactor[i]+primefactor[i-1];
	}
	for(i=1;i<=n;i++)
	{
		printCombination(array,n,i);
	}
	cout<<ncount<<endl;
	return 0;
}

void printCombination(int arr[], int n, int r)
{
        int data[r];
        combinationUtil(arr, n, r, 0, data, 0);
}

void combinationUtil(int arr[], int n, int r, int index, int data[], int i)
{
	long long int temp=0;
        if (index == r)
        {
                for (int j=0; j<r; j++)
                {
                	temp+=primefactor[data[j]];
                        //printf("%d ",data[j]);
                }
                //printf("\n");
                if(temp%2==0)
                {
                	ncount+=temp;
                }
                return;
        }
        if (i >= n)
                return;
        data[index] = arr[i];
        combinationUtil(arr, n, r, index+1, data, i+1);
        combinationUtil(arr, n, r, index, data, i+1);
}
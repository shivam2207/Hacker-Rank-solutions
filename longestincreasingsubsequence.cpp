#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
string decimal_to_binary(int);
int binary_to_decimal(string);
bool is_prime(int);
int gcd(int,int);
int main()
{
	int n;
	cin >> n;
	int arr[n],i,temp[n],j;
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
		temp[i]=1;
	}
	i=1;
	while(i<n)
	{
		j=0;
		while(j<i)
		{
			if(arr[j]<arr[i])
			{
				temp[i]=max(temp[i],temp[j]+1);
			}
			j++;
		}
		i++;
	}
	cout <<*max_element(temp,temp+n)<<endl;
	return 0;
}

string decimal_to_binary(int n)
{
	int i=0;
	string binary=bitset<32>(n).to_string();
	while(i<32 && binary[i]=='0') i++;
	return binary.substr(i);
}
int binary_to_decimal(string s)
{
	int n=bitset<32>(s).to_ulong();
	return n;
}
int gcd(int a,int b)
{
	if(a==0 && b==0) return -1;else if(a==0) return b;else if(b==0) return a;
	else return	gcd(b%a,a);
}
bool is_prime(int n)//return true if prime
{
	if(n<2) return false; else if(n==2) return true; else if(n%2==0) return false;
	else
	{
		for(int i=3;i*i<=n;i+=2) 
			if(n%i==0) return false;
		return true;
	}
}
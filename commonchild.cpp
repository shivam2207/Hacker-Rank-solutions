#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

string a,b;

//int table[5000][5000];
int lcs(int,int);
int main()
{
	cin >> a >> b;
	int m,n,output;
	//cout<<"hello1"<<endl;
	//memset(table,-1,sizeof(table));
	//cout<<"hello2"<<endl;
	m=a.length();
	n=b.length();
	output=lcs(m-1,n-1);
	cout << output << endl;
	return 0;
}

int lcs(int m,int n)
{
	if(m==-1 || n==-1)
		return 0;
	//else if(table[m][n]!=-1)
	//	return table[m][n];
	else
	{		
		int temp1,temp2,temp3;
		if(a[m]==b[n])
			return (1+lcs(m-1,n-1));
		else
		{
			//if(table[m-1][n]==-1)
			//{
				temp1=lcs(m-1,n);
				//table[m-1][n]=temp1;
			//}
			//if(table[m][n-1]==-1)
			//{
				temp2=lcs(m,n-1);
				//table[m][n-1]=temp2;
			//}
			temp3=max(temp1,temp2);
			//table[m][n]=temp3;
			return temp3;
		}
	}
}
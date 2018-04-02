#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <queue>
using namespace std;

long int lps(string);
long int max (long int x,long int y) 
{ 
	return (x > y)? x : y; 
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int len1,len2,len3,len4;
		string s1,s2,s3;
		cin >> s1 >> s2;
		len1=lps(s1);
		len2=lps(s2);
		s3=s1.append(s2);
		cout<<s3<<endl;
		len3=lps(s3);
		len4=len1+len2;
		cout<<"len3="<<len3<<endl;
		cout<<"len4="<<len4<<endl;
		if(len4>=len3)
			cout<<len4<<endl;
		else
			cout<<len3<<endl;
	}
	return 0;
}

long int lps(string str)
{
	//int n = strlen(str);
	long int n=str.size();
	long int i, j, cl;
	long int L[n][n]; 

	for (i = 0; i < n; i++)
        	L[i][i] = 1;

    for (cl=2; cl<=n; cl++)
    {
        for (i=0; i<n-cl+1; i++)
        {
            j = i+cl-1;
            if (str[i] == str[j] && cl == 2)
                L[i][j] = 2;
            else if (str[i] == str[j])
                L[i][j] = L[i+1][j-1] + 2;
            else
                L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }
    return L[0][n-1];
}
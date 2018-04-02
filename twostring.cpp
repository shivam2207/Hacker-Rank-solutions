#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string a,b;
		cin >> a >> b;
		bool array1[26]={0},array2[26]={0};
		int i,temp,flag=0;
		for(i=0;i<(int)a.length();i++)
		{
			temp=(int)(a[i]-'a');
			array1[temp]=true;
		}
		for(i=0;i<(int)b.length();i++)
		{
			temp=(int)(b[i]-'a');
			array2[temp]=true;
		}
		for(i=0;i<26;i++)
		{
			if(array1[i]==true && array2[i]==true)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
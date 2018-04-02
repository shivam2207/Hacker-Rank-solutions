#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	string a,b;
	cin >> a >> b;
	int i,j,len1=a.length(),len2=b.length();
	int count=0,flag=0,total=0;
	for(i=0;i<len1-len2+1;i++)
	{
		count=0;
		flag=0;
		for(j=0;j<len2;j++)
		{
			if(a[i+j]!=b[j])
				count++;
			if(count>1)
			{
				flag=1;
				break;
			}
		}
		if(flag==0 && count==1)
			total++;
	}
	cout<<total<<endl;
	return 0;
}	
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int i,j,flag=0;
		i=0;
		j=s.size()-1;
		while(i<(int)s.size()-1 && j>0)
		{
			if(abs(s[i]-s[i+1])!=abs(s[j]-s[j-1]))
			{
				flag=1;
				break;
			}
			else
			{
				i++;
				j--;
			}
		}
		if(flag==1)
			cout<<"Not Funny" <<endl;
		else
			cout<<"Funny"<<endl;
	}
	return 0;
}
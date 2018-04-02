#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		bool temp;
		temp=next_permutation(s.begin(),s.end());
		if(temp==false)
			cout<<"no answer"<<endl;
		else
			cout<<s<<endl;
	}
	return 0;
}
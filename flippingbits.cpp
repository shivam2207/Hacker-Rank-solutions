#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unsigned long long n;
		cin >> n;
		int i;
		string binary = bitset<32>(n).to_string(); //to binary
		//cout<<binary<<"\n";
		for(i=0;i<32;i++)
		{
			if(binary[i]=='0')
				binary[i]='1';
			else
				binary[i]='0';
		}
		unsigned long long decimal = bitset<32>(binary).to_ullong();
		cout<<decimal<<"\n";
	}
	return 0;
}
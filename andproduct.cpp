#include <iostream>
#include <bitset>
#include <string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a,b,c;
		int i=0;
		string first,second,final;
		cin >> a >> b;
		first=bitset <32> (a).to_string();
		second=bitset <32> (b).to_string();
		//cout << first <<endl;
		//cout << second << endl;
		while(first[i]==second[i])
		{	
			final.push_back(first[i]);
			i++;
		}
		while(i<32)
		{
			final.push_back('0');
			i++;
		}
		//cout << final <<endl;
		c=bitset<32>(final).to_ullong();
		cout << c << endl;
	}
	return 0;
}
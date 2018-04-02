#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
int main()
{
	int n,i,temp;
	cin >> n;
	vector <int> v;
	for(i=0;i<n;i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	cout<<v[n/2]<<endl;
	return 0;
}
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <cmath>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int array[26]={0},i,temp,temp_array[2],count1,count2;
	map <int,int> mymap;
	map <int,int> :: iterator it;
	set <int> myset;
	set <int> :: iterator its;
 	for(i=0;i<(int)s.length();i++)
	{
		temp=(int)(s[i]-'a');
		array[temp]++;
	}
	// for(i=0;i<26;i++)
	// {
	// 	cout<<array[i]<<" ";
	// }
	//cout<<"\n";
	for(i=0;i<26;i++)
	{
		if(array[i]!=0)
		{
			myset.insert(array[i]);
			it=mymap.find(array[i]);
			if(it==mymap.end())
			{
				mymap[array[i]]=1;
			}
			else
			{
				it->second=it->second+1;
			}
		}
	}
	if(mymap.size()==1)
		cout<<"YES"<<endl;
	else if(mymap.size()>2)
		cout<<"NO"<<endl;
	else
	{
		i=0;
		for(auto& x: mymap)
		{
			temp_array[i]=x.second;
			i++;
		}
		// cout<<"temp_array[0]="<<temp_array[0]<<endl;
		// cout<<"temp_array[1]="<<temp_array[1]<<endl;
		if(temp_array[0]!=1 && temp_array[1]!=1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			its=myset.begin();
			count1=*its;
			count2=*(++its);
			// cout<<"count1="<<count1<<endl;
			// cout<<"count2="<<count2<<endl;
			if(abs(count2-count1)==1)
				cout<<"YES"<<endl;
			else if(count2==1 || count1==1)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}
	return 0;
}
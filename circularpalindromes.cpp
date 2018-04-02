#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;
int longest_palindromic_substring(string);//manacher's algo O(n) time
int main()
{
	int n,i,ans;
	cin >> n;
	string s,s1,s2;
	cin >> s;
	for(i=0;i<n;i++)
	{
		s1=s.substr(i);
		s2=s.substr(0,i);
		s1.append(s2);
		//cout << s1 <<endl;
		ans=longest_palindromic_substring(s1);
		cout<<ans<<endl;
	}
	return 0;
}

int longest_palindromic_substring(string input)
{
	int length=input.size(),i,j=0,maxlength;
	char newinput[2*length+1];
	int temp[2*length+1];
	memset(temp,0,sizeof(temp));
	for(i=0;i<2*length+1;i++)
	{
		if(i%2==0)
		{
			newinput[i]='$';
		}
		else
		{
			newinput[i]=input[j];
			j++;
		}
	}
	int start=0,end=0;
	for(i=0;i<2*length+1;)
	{
		while(start>0 && end < 2*length && newinput[start-1]==newinput[end+1])
		{
			start--;
			end++;
		}
		temp[i]=end-start+1;
		if(end==2*length)
			break;
		int newcentre=end+(i%2==0 ? 1 : 0);
		for(j=i+1;j<=end;j++)
		{
			temp[j]=min(temp[i-(j-i)],2*(end-j)+1);
			if(j+temp[i-(j-i)]/2==end)
			{
				newcentre=j;
				break;
			}
		}
		i=newcentre;
		end=i+temp[i]/2;
		start=i-temp[i]/2;
	}
	maxlength=*max_element(temp,temp+2*length+1);
	return maxlength/2;
}
#include <cstdio>
#include <algorithm>
#include <string>
int main()
{
	int n,i,count=0;
	scanf("%d",&n);
	char s[101];
	scanf("%s",s);
	//printf("%s\n",s );
	for(i=0;i<n-2;i++)
	{
		if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
		{
			count++;
			i=i+2;
		}
	}
	printf("%d\n",count);
	return 0;
}

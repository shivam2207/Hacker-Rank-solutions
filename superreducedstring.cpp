#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	char s[101],temp;
	scanf("%s",s);
	//printf("%d\n",strlen(s));
	int size=strlen(s),i,flag=0,j;
	while(flag==0)
	{
		flag=1;
		i=0;
		while(i<size-1)
		{
			if(s[i]==s[i+1] && s[i]!='\0')
			{
				s[i]=s[i+1]='\0';
				flag=0;
				i=i+2;
			}
			else if(s[i]!='\0' && s[i+1]=='\0')
			{
				j=i+1;
				while(j<size && s[j]=='\0')
				{
					j++;
				}
				if(j<size && s[i]==s[j])
				{
					s[i]=s[j]='\0';
					flag=0;
					i=j+1;
				}
				else
					i=j;
			}
			else if(s[i]=='\0')
			{
				j=i+1;
				while(j<size && s[j]=='\0')
				{
					j++;
				}
				i=j;
			}
			else
				i++;
		}
	}
	flag=0;
	for(i=0;i<size;i++)
	{
		if(s[i]!='\0')
		{
			flag=1;
			printf("%c",s[i]);
		}
	}
	if(flag==1)
		printf("\n");
	else
		printf("Empty String\n");
	return 0;
}
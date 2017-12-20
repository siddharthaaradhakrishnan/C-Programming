#include <stdio.h>
#include<string.h>

int main(void) {
	char s[10],temp=0;
	int x;
	gets(s);
	x=strlen(s);
	if(x%2==0)
	{
		for(int i=0;i<x;i=i+2)
		{
			temp=s[i+1];
			s[i+1]=s[i];
			s[i]=temp;
			}
}
	else {
		for(int i=0;i<(x-1);i=i+2)
		{
			temp=s[i+1];
			s[i+1]=s[i];
			s[i]=temp;
		}
	}
for(int i=0;i<x;i++)
{
printf("%c",s[i]);
}
return 0;
}

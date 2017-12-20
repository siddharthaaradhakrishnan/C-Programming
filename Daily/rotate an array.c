#include <stdio.h>
#include<string.h>

int main(void)
{
char s[]={10,20,30,40,50};
int temp[5],n,len;
len=strlen(s);
scanf("%d",&n);
int k=0;
for(int i=0;i<n;i++)
{
	temp[i]=s[i];
}
for(int i=0;i<n;i++)
{
for(int i=0;i<len-1;i++)
{
	s[i]=s[i+1];
}
}
for(int i=len-n-1;i<len-1;i++)
{
	s[i]=temp[k];
	k++;
}



for(int i=0;i<len-1;i++)
printf("%d ",s[i]);
return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j;
scanf("%d %d",&i,&j);
for(int a=i+1;a<j;a++)
{
	if(a%2!=0)
	{
	printf("%d\t",a);
	}
}
 return 0;
}

#include <stdio.h>
int main(void) 
{
	int x,count=0,a;
	scanf("%d",&x);
	while(x!=0)
	{
		x=x/10;
		count++;
	}
	printf("%d",count);
	return 0;
	}
	

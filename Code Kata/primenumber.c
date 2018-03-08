#include <stdio.h>

int main(void) {
	int n,count=0;
	scanf("%d",&n);
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
		if(count==0)
		{
			printf("Prime Number");
		}
		else 
		{
				printf("Not a Prime Number");
		}
	
	return 0;
}

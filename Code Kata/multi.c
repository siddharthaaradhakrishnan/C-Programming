#include <stdio.h>
#include<string.h>

int main(void) {
	int a,fact=0;
	scanf("%d",&a);
	for(int i=1;i<6;i++)
	{
		fact=a*i;
		printf("%d\t",fact);
	}
	return 0;
}

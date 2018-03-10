#include <stdio.h>
#include<string.h>

int main(void) {
	int a,fact=1;
	scanf("%d",&a);
	for(int i=a;i>0;i--)
	{
		fact=fact*i;
	}

	printf("%d",fact);
	return 0;
}

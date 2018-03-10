#include <stdio.h>
#include<string.h>

int main(void) {
	int n,fact=1;
	scanf("%d",&n);
	for(int i=n;i>0;i--)
	{
		fact=fact*i;
	}

	printf("%d",fact);
	return 0;
}

#include <stdio.h>

int main(void) {
	int n,sum=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}

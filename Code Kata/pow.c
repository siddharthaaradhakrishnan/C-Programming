#include <stdio.h>

int main(void) {
	int a,b,pow;
	scanf("%d %d",&a,&b);
	pow=a;
	for(int i=1;i<b;i++)
	{
		pow=pow*a;
	}
	printf("%d",pow);
	return 0;
}

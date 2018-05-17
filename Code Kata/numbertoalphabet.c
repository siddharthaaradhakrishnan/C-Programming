#include <stdio.h>

int main(void) {
	int n,w=1;
	scanf("%d",&n);
	while(n!=0)
	{
		int temp;
		temp=n%100;
		if(temp<=26)
		{
			w=w+2;
		}
		n=n/100;
	}
	printf("%d",w);
return 0;
}

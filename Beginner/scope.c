#include <stdio.h>
int s=10;
int main(void) {
	printf("Global Scope Integer Value %d\n",s);
	int s=30;
	{
		int s=50;
		printf("Block Scope Variable Value %d\n",s);
	}
		printf("Local Scope Integer Value %d",s);
	return 0;
}

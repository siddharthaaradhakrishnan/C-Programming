#include <stdio.h>
#include<string.h>

int main(void) {
	char a[100],temp;
	scanf("%s",a);
	int n=strlen(a),i=0;
	while(i<n)
	{
		temp=a[n-1];
		a[n-1]=a[i];
		a[i]=temp;
		i++;
		n--;
	}
	printf("%s",a);
	return 0;
}

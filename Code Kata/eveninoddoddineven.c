#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(((arr[i]%2==0)&&((i%2)!=0))||((arr[i]%2!=0)&&((i%2)==0)))
		{
		
			printf("%d\t",arr[i]);
	}
	}		
return 0;

}


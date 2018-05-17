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
		int k=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				k++;
		}
		}
		if(k==1)
		{
			printf("%d\t",arr[i]);
		
		}
	}
return 0;
}

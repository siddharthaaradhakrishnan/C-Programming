#include <stdio.h>

int main(void) {
	int n,k;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n;j++)
		
		{ k=1;
		while ((k+i)<n)
		{
			if((arr[i]+arr[i+k])==arr[j])
			{
				printf("%d\t%d\t%d\n",arr[i],arr[i+k],arr[j]);
			}
			k++;
		}
	}
	}
return 0;

}


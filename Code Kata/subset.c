#include <stdio.h>

int main(void) {
	int n,m,a=0;
	scanf("%d",&n);
	scanf("%d",&m);
	int arr[n];
	int ar[m];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<m;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(int i=0;i<m;i++)
	{
			for(int j=0;j<n;j++)
			{
				if(ar[i]==arr[j])
				{
					a++;
				}
			}
	}
	if(a>=m)
	{
		printf("Yes");
	}
	else printf("No");
	
return (0);
}


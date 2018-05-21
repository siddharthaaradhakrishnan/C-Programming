#include <stdio.h>
int main(void) 
{
	int n,sum=0,j=0;
	scanf("%d",&n);
    int arr[n],array[n],max=0;
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
    
    }
    for(int i=0;i<n;i++)
    {
    	if(arr[i]>max)
    	{
            	array[j]=i;
            	max=arr[i];
            	j++;
    	}
    }
    for(int i=array[0];i<=array[1];i++)
    {
    	sum+=arr[i];
    }
    
    printf("%d",sum);
	return 0;
}

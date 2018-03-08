#include<stdio.h>
int main(void)
{
    int n,sum=0,i,a;
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
    	i=a%10;
    	sum=sum+(i*i*i);
    	a=a/10;
    }
    if(sum==n)
    {
    	printf("Yes");
    }
    else
    {
    printf("No");	
    }
    return(0);
}

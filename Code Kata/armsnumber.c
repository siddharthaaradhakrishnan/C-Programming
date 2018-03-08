#include<stdio.h>
int main(void)
{
    int n,i,a,m,sum;
    scanf("%d%d",&n,&m);
    for(int j=n;j<m;j++)
    {
    a=j;
    sum=0;
    while(j!=0)
    {
    	i=j%10;
    	sum=sum+(i*i*i);
    	j=j/10;
    }
    if(sum==a)
    {
    	printf("%d",sum);
    }
    }
    return(0);
}

#include<stdio.h>
int main(void)
{
    int n,i,a=0,m,sum;
    scanf("%d%d",&n,&m);
    for(int j=n;j<m;j++)
    {
    a=j;
    sum=0;
    while(a!=0)
    {
    	i=a%10;
    	sum=sum+(i*i*i);
    	a=a/10;
    }
    if(sum==j)
    {
    	printf("%d\n",sum);
    }
    }
    return(0);
}

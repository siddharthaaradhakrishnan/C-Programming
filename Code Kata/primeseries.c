#include<stdio.h>
int main(void)
{
    int n,m,i,fact,j;
    scanf("%d %d",&n,&m);
    for(i=n+1; i<m; i++)
    {
        fact=0;
        for(j=1;j<m; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }
    return(0);
}

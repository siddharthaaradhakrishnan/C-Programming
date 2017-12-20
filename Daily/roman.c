#include<stdio.h>
#include<string.h>
int main(void) {
    int a[5],i,x,sum=0;
    char s[10];
    gets(s);
    x=strlen(s);
    for(i=0;i<x;i++)
    {
        if(s[i]=='X')
        a[i]=10;    
        if(s[i]=='V')
        a[i]=5;    
        if(s[i]=='I')
        a[i]=1;    
             }
    for(i=x-1;i>0;i--)
    {
        if(a[i]>a[i-1])
        {
            sum=a[i]-a[i-1];
        }
        if(a[i]<=a[i-1])
        {
        if(i==x-1)
        {sum=a[i-1]+a[i];}
        else { sum=sum+a[i-1]; }
        }
        
    }
    printf("%d",sum);
    return 0;
}

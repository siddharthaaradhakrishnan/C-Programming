#include <stdio.h>
int main(void){
    int x;
   printf("Enter an integer\n");
   scanf("%d",&x);
   if(x<0)
   printf("The entered integer is negative");
   else if(x>0)
   printf("The entered integer is positive");
   else if(x==0)
   printf("The value you have entered is zero");
return 0;

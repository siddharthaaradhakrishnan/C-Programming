#include<stdio.h>
int main(void)
{
 int a;
 scanf("%d",&a);
 if(a%4==0)
 {
 	if(a%100==0)
 	{
 		if(a%400==0)
 			printf("It is a Leap Year");
 			else 
 			printf("Not a Leap Year");
 	}
 	else printf("It is a Leap Year");
 }
 else printf("Not a Leap Year");
 return 0;
 
}

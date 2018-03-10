#include<stdio.h>

int main(void) {
	int N,A,D,num=0;
	scanf("%d%d%d",&N,&A,&D);
	int sum=0;
	for(int i=A;i<=N;i=i+D)
	{
	
		sum=sum+i;
		
	}
	printf("%d\t",sum);
	return 0;
}

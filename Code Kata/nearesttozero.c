#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int arr[n];
	int ar[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
int j=0,k=1,sum=100;
while(k<n)
{
	if((arr[j]+arr[j+k])<sum)
	{
		sum=arr[j]+arr[j+k];
		ar[0]=arr[j];
		ar[1]=arr[j+k];

}
k++;
}
printf("%d\t%d",ar[0],ar[1]);

return 0;

}


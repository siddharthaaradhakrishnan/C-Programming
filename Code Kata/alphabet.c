#include <stdio.h>

int main(void)
{
	char x;
	scanf("%c",&x);
	if((x>='a'&&x<='z')||(x>='A'&&x<='Z'))
	{
printf("Alphabet");
}
else
{
printf("Not an alphabet");
}
	return 0;
}

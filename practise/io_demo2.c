#include <stdio.h>

int main(void)
{
	char a,b,c;
	int num;

	printf("Enter the 1st 3 alphabets and a random number: ");
	scanf("%c %c %c %d", &a, &b, &c, &num);
	printf("You entered: %c %c %c as alphabets and number %d.\n",a,b,c,num);
	return(0);
}

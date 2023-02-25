#include <stdio.h>

int main(void)
{
	int a = 13;
	int b = 35;
	int c = 79;
	int d = 10;
	int result;

	result = a - b;
	printf("a - b = %i\n", result);

	result = a + b;
        printf("a + b = %i\n", result);

	result = a / c;
        printf("a / b = %i\n", result);

	result = a + b - c;
        printf("a + b - c = %i\n", result);

	result = a - b + c * d;
        printf("a - b + c * d = %i\n", result);

	return (0);
	

}

#include <stdio.h>

int main()
{
	int n [5];  /* array of 5 integers */
	int i,j;

	/* initialize elements of array n to 0 */
	for ( i = 1; i < 5; i++) {n[i] = i*2;} /*set element at location i to i*2 */

	/* output each array element's value */
	for (j = 1; j < 5; j++) {
		printf("%d*2 = %d\n", j, n[j]);
	}

	return (0);
		
}

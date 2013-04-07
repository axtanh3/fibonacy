/*
 * Fibonacy
 */
#include <stdio.h>

/* prototype */
int f(int n);
/* main function */
int main(void)
{
 	int n = 3;
	printf("%d", f(n));
	return 0;
}

int f(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else 
		return (f(n - 1) + f(n - 2));
}

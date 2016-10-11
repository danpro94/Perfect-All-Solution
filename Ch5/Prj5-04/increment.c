// file: increment.c

#include <stdio.h>

int main(void)
{
	int m = 10, n = 5;
	int result;

	result = m++ + --n;
	printf("m=%d n=%d result=%d\n", m, n, result);

	result = ++m - n--;
	printf("m=%d n=%d result=%d\n", m, n, result);

	return 0;
}
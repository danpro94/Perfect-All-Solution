// file: assignment.c

#include <stdio.h>

int main(void)
{
	int a, b, c;
	a = b = c = 5;	//(a = (b = (c = 5)))

	printf("a = a + 2 ==> %d\n", a = a + 2);
	printf("a ==> %d\n", a);
	printf("a = b + c ==> %d\n", a = b + c);
	printf("a ==> %d\n", a);

	return 0;
}
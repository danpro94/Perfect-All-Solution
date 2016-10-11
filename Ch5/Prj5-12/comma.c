// file: comma.c

#include <stdio.h>

int main(void)
{
	int a = 100, b = 50, c;

	printf("%d ", sizeof(short));
	printf("%d ", sizeof a);
	printf("%d ", sizeof 3.5F);
	printf("%d\n", sizeof 3.14);

	c = ++a, b++;
	printf("%d %d %d\n", a, b, c);
	c = (3 + a, b * 2);
	printf("%d %d %d\n",a, b, c);

	return 0;
}
// file: relation.c

#include <stdio.h>

int main(void)
{
	printf("(3 > 4) 결과값: %d\n", (3 > 4));
	printf("(3 < 4.0) 결과값: %d\n", (3 < 4.0));
	printf("('a' <= 'b') 결과값: %d\n", ('a' <= 'b'));
	printf("('Z' <= 'a') 결과값: %d\n", ('Z' <= 'a'));
	printf("(4.27 >= 4.35) 결과값: %d\n", (4.27 >= 4.35));
	printf("(4 != 4.0) 결과값: %d\n", (4 != 4.0));
	printf("(4.0F == 4.0) 결과값: %d\n", (4.0F == 4.0));

	return 0;
}

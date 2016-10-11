// file: printwidth.c

#include <stdio.h>

int main(void)
{
	printf("	1234567890\n");

	printf("1 %8d\n", 7629);
	printf("2 %-8d\n", 7629);
	printf("3 %10.3f\n", 32.369);
	printf("4 %10f\n", 32.369);
	printf("5 %5f\n", 32.369);
	printf("6 %-10.3f\n", 32.369);
	printf("7 %+10.3f\n", 32.369);
	printf("8 %-+10.3f\n", 32.369);

	int n = 255;
	float f = 3.141592F;

	printf("\n	1234567890\n");
	printf("1 %d\n", n);
	printf("2 %10d\n", n);
	printf("3 %+10d\n", n);
	printf("4 %-10d\n", n);
	printf("5 %f\n", f);
	printf("6 %10f\n", f);
	printf("7 %10.4f\n", f);
	printf("8 %+10.4f\n", f);
	printf("9 %-10.4f\n", f);
	//지정한 전체 폭이 작으면 무시하고 출력해야 할 최소의 전체 폭으로 출력
	printf("10 %5.3f\n", 324.56789);

	return 0;
}
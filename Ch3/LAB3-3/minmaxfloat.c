// minmaxfloat.c: 부동소수형 세가지의 최대 최소 상수 출력

#include <stdio.h>
#include <float.h>

int main(void)
{
	printf("float 범위: %e %e\n", FLT_MIN, FLT_MAX);
	printf("double 범위: %e %e\n", FLT_MIN, FLT_MAX);
	printf("long double 범위: %e %e\n", LDBL_MIN, LDBL_MAX);

	return 0;
}
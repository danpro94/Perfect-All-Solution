// file: maxof3.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("세 정수를 입력:");
	scanf("%d %d %d", &x, &y, &z);

	if (x > y)
	{
		if (x > y)
			printf("최대수: %d\n", x);
		else
			printf("최대수: %d\n", z);
	}
	else
	{
		if (y > x)
			printf("최대수: %d\n", y);
		else
			printf("최대수: %d\n", z);
	}

	return 0;
}
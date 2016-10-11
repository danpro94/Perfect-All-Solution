// file: simplemaxof3.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y, z;

	printf("세 정수를 입력: ");
	scanf("%d %d %d", &x, &y, &z);

	switch ((x > y))
	{
	case 0:
		printf("최대값: %d\n", y > z ? y : z);
		break;
	case 1:
		printf("최대값: %d\n", x > z ? x : z);
		break;
	}

	return 0;
}
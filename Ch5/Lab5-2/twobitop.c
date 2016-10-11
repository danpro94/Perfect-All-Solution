// twobitop.c
#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;

	printf("비트 연산이 가능한 두 정수를 입력하세요\n");
	scanf("%d %d", &a, &b);

	printf("%3d & %3d ==> %3d\n", a, b, a & b);
	printf("%3d | %3d ==> %3d\n", a, b, a | b);
	printf("%3d ^ %3d ==> %3d\n", a, b, a ^ b);
	printf(" ~%3d ==> %3d\n", a, ~a);
	printf("%3d >> %3d ==> %3d\n", a, b, a >> b);
	printf("%3d << %3d ==> %3d\n", a, b, a << b);

	return 0;
}
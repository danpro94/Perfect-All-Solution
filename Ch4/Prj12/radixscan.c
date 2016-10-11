//file: radixscan.c

#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("십진수, 팔진수, 십육진수를 각각 입력하세요.\n");
	scanf("%d %o %x", &a, &b, &c);
	printf("%d %#o %#x\n\n", a, b, c);

	printf("십진수, 팔진수(0리딩표현), 십육진수(0x리딩 표현)를 각각 입력하세요.\n");
	scanf("%i %i %i", &a, &b, &c);
	printf("%d %d %d", a, b, c);

	return 0;
}
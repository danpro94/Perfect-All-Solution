// file: if.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double temperature;

	printf("현재 온도 입력: ");
	scanf("%lf", &temperature);

	if (temperature >= 32.0)
	{
		printf("폭염 주의보를 발령합니다.\n");
		printf("건강에 유의하세요.\n");
	}
	printf("현재 온도는 섭씨 %.2f 입니다.\n", temperature);

	return 0;
}
// file: switch.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double x, y, result;
	int op;
	
	printf("두 실수 입력:");
	scanf("%lf %lf", &x, &y);
	printf("연산종류 번호선택 1(+), 2(-), 3(*), 4(/): ");
	scanf("%d", &op);

	switch (op) {
	case 1:
		printf("%.2f + %.2f = %.2f\n", x, y, x + y);
		break;
	case 2:
		printf("%.2f - %.2f = %.2f\n", x, y, x - y);
		break;
	case 3:
		printf("%.2f * %.2f = %.2f\n", x, y, x * y);
		break;
	case 4:
		printf("%.2f / %.2f = %.2f\n", x, y, x / y);
		break;

	default:
		printf("번호를 잘못 선택했습니다.\n");
		break; //생략가능
	}

	return 0;
}
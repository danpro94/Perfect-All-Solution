// file: priority

#include <stdio.h>

int main(void)
{
	int a = 4, b = 6;
	double x = 3.3, y = 4.7;

	printf("%d ", a + b > y && x < y);	 //산술 > 관계 > 논리
	printf("%d ", a++ - --b * 2);		//단항 > 곱셈 > 뺄셈
	printf("%f ", a > b ? x + 1 : y * 2);	//산술 > 관계 > 조건
	printf("%f ", x += 3 && y + 2);		//산술 > 논리 > 대입
	printf("%f\n", (x = x + 1, y = y + 1));//괄호 > 산술 > 대입 > 콤마

	return 0;
}
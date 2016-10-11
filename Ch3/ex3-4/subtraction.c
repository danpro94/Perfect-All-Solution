/*
	솔루션 / 프로젝트 / 소스파일: HomePJ CH3 / ex3-4 / subtraction.c
	변수의 저장공간 자체와 변수에 저장된 값을 의미
	V 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	int num1 = 30, num2 = 14;
	int difference;
	
	//대입 연산자의 왼쪽과 오른쪽에서의 변수의 의미 해석
	difference = num1 - num2;

	pritnf("num: %d, num2: %d\n", num1, num2);
	pritnf("num1 - num2 의 결과: %d\n", difference);

	return 0;
}
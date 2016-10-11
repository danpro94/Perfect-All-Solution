// basictype.c: 두 정수의 합, 두 실수의 차 출력

#include <stdio.h>

int main(void)
{
	int a = 30, b = 43;//두 정수 선언과 초기값 대입
	int sum;		   //두 정수의 합을 저장할 변수 선언
	sum = a + b;	   //두 정수의 합 구하기

	double x = 38.342, y = 45.345;	//두 실수 선언과 초기값 대입
	double another;					//두 실수의 차를 저장할 변수 선언
	another = x - y;				//두 실수의 차 구하기

	printf("합: %d\n", sum);		//두 정수의 합 출력
	printf("차: %f\n", another);	//두 정수의 차 출력

	return 0;
}
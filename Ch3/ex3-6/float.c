/*
	솔루션 / 프로젝트 / 소스파일: HomePJ CH3 / ex3-6 / float.c
	부동소수형 변수의 선언과 활용
	V 1.0 2016.
*/

#include <stdio.h>

int main(void)
{
	float		x = 3.14F;		//float x = 3.14;인 경우, 경고 발생
	double		y = -3.141592;	//double 저장공간 크기는 float의 2배
	long double	z = 180000000.0;//double과 long double은 저장공간이 모두 64비트
	
	printf("저장값: %f %f %f\n", x, y, z);

	return 0;
}
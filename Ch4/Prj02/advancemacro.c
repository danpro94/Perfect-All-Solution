// file: advancemacro.c

#include <stdio.h>

#define MESSAGE "프로그램언어의 학습은 일반언어의 학습과 \
					같이 반복학습이 중요하다"

#define PI		3.141592					//PI를 3.14로 대치하는 지시자
#define VOLUME(r)	 (4 * PI * CUBE(r) / 3)	//구의 체적을 구하는 매크로
#define SQUARE(x)	 ( (x) * (x) )			//인자 x의 제곱 구하는 매크로
#define CUBE(x)		 ( SQUARE(x) * (x) )	//인자 x의 세제곱 구하는 매크로
#define MULT(x, y)	 ( (x) * (y) )			//인자 x, y의 곱 구하는 매크로

int main(void)
{
	double radius = 2.32;
	printf("반지름이 %.2lf인 구의 체적은 %.2lf 입니다.\n", radius, VOLUME(radius));
	printf("실수 %.2f의 제곱은 %.2f 입니다.\n", 4.29, SQUARE(4.29));
	printf("실수 %.2f의 제곱은 %.2f 입니다.\n", 3.0, CUBE(3.0));
	printf("실수 %.2f와 실수 %.2f의 곱은 %.2f 입니다.\n", 2.78, 3.62, MULT(2.78, 3.62));

	puts(MESSAGE);

	return 0;
}


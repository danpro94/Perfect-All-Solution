// file: enumswitch.c
#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	enum color { RED, GREEN, BLUR };
	int input;

	printf("세 정수(R[0], G[1], B[2])중의 하나를 입력: ");
	scanf("%d", &input);

	switch (input)
	{
	case RED:
		printf("Red\n");
		break;
	case GREEN:
		printf("Green\n");
		break;
	case BLUR:
		printf("Blue\n");
		break;

	default:
		printf("잘못된 입력. \n");
	}

	return 0;
}
// file: enumswitch.c
#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	enum color { RED, GREEN, BLUR };
	int input;

	printf("�� ����(R[0], G[1], B[2])���� �ϳ��� �Է�: ");
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
		printf("�߸��� �Է�. \n");
	}

	return 0;
}
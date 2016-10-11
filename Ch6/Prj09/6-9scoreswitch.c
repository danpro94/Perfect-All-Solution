// file: scorewitch.c
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score;

	printf("점수 입력: ");
	scanf("%d", &score);

	switch (score / 10) {
	case 10: case 9:
		printf("점수가 %d 점으로 성적이 %c 입니다.", score, 'A');
		break;
	case 8:
		printf("점수가 %d 점으로 성적이 %c 입니다.", score, 'B');
		break;
	case 7:
		printf("점수가 %d 점으로 성적이 %c 입니다.", score, 'B');
		break;
	case 6:
		printf("점수가 %d 점으로 성적이 %c 입니다.", score, 'C');
		break;
		
	default:
		printf("점수가 %d 점으로 성적이 %c 입니다.", score, 'F');

	}

	return 0;
}
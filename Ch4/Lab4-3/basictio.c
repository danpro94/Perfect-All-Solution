//file : basictio.h
#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의

#include <stdio.h>

int main(void)
{
	int dec = 30, oct = 012, hex = 0x5E;
	printf("세 개의 정수를 각각 다음과 같이 입력하세요. ");
	printf("십진수 - 팔진수 - 십육진수\n");
	
	scanf("%d - %o - %x", &dec, &oct, &hex);
	printf("\n입력한 수는 다음과 같습니다.\n");
	printf("%d - %o - %x\n", dec, oct, hex);
	printf("%d - %d - %d\n", dec, oct, hex);

	return 0;
}
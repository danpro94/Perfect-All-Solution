//십진수를 이진수, 팔진수, 십육진수로 변환

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num;
	int i;

	while (1) {

		printf("정수를 하나 입력하세요. >> ");
		scanf("%d", &num);

		if (num == 0) {
			printf("\n종료합니다.\n");
			break;
		}
		
		printf("\n이진수 : ");
		for (i = 31; i >= 0; --i) {
			printf("%d", (num >> i) & 1);
		}
		printf("\n\n");
		printf("팔진수: \t\t\t%o\t%o\n\n", num, num);
		printf("16진수: \t\t\t%X\t%X\n\n\n\n", num, num);
	
	}
	return 0;
}
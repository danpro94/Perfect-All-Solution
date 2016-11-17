//비트연산 & | ^ ~

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char ch1, ch2;
	int slt;
	int num1, num2;

	while (1) {

		printf("\t\t[1] 비트AND(&)\n\n");
		printf("\t\t[2] 비트OR(|)\n\n");
		printf("\t\t[3] 비트XOR(^)\n\n");
		printf("\t\t[4] 비트COMPLEMENT(~)\n\n");
		printf("\t\t[0] 종료(stop)\n\n");

		printf("위 연산 중 하나를 선택하세요. >> ");
		scanf("%c%d%c", &ch1, &slt, &ch2);

		if (slt == 0) {
			printf("\n종료합니다.\n");
			break;
		}
		printf("\n\n\n");

		switch (slt) {
		
		case 1:
			printf("비트 연산할 두 정수 입력>> ");
			scanf("%d %d", &num1, &num2);

			printf("\n\t    x = ");
			
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num1 >> i) & 1);
			}
			printf(" %d\n\n", num1);

			printf("\n\t    y = ");
			
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num2 >> i) & 1);
			}
			printf(" %d\n\n", num2);

			printf("\t x & y = ");
			
			for (int i = 31; i >= 0; --i) {
				printf("%d", ((num1 & num2) >> i) & 1);
			}
			printf(" %d\n\n", num1 & num2);
			
			break;


		case 2:
			printf("비트 연산할 두 정수 입력>> ");
			scanf("%d %d", &num1, &num2);

			printf("\n\t    x = ");
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num1 >> i) & 1);
			}
			printf(" %d\n\n", num1);

			printf("\t    y = ");
			
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num2 >> i) & 1);
			}
			printf(" %d\n\n", num2);

			printf("\tx | y = ");
			
			for (int i = 31; i >= 0; --i) {
				printf("%d", ((num1 | num2) >> i) & 1);
			}
			printf(" %d\n\n", num1 | num2);
			
			break;


		case 3:
			printf("비트 연산할 두 정수 입력>> ");
			scanf("%d %d", &num1, &num2);

			printf("\n\t    x = ");
			
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num1 >> i) & 1);
			}
			printf(" %d\n\n", num1);

			printf("\t    y = ");
			
			for (int i = 31; i >= 0; --i) {
				printf("%d", (num2 >> i) & 1);
			}
			printf(" %d\n\n", num2);

			printf("\tx ^ y = ");
			
			for (int i = 31; i >= 0; --i) {
				printf("%d", ((num1 ^ num2) >> i) & 1);
			}
			printf(" %d\n\n", num1 ^ num2);

			break;


		case 4:
			printf("비트 보수(~) 연산할 하나의 정수 입력>> ");
			scanf("%d", &num1);

			printf("\n\t    x = ");

			for (int i = 31; i >= 0; --i) {
				printf("%d", (num1 >> i) & 1);
			}
			printf("\n\n");

			printf("\t   ~x = ");

			for (int i = 31; i >= 0; --i) {
				printf("%d", ((~num1) >> i) & 1);
			}
			printf(" %d\n\n", ~num1);

			break;

		}
		printf("\n=============================================================\n\n");
	}
}
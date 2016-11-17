//다양한 길이의 변환 구하기

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num1, num2;
	double dbl;

	printf("다음 단위에서 [변환할단위] --> [변환결과 단위]로 연산합니다.\n\n\n");

	printf(" [1] 미터(m)  [2] 인치(in)  [3] 피트(ft)  [4] 야드(yd)  [0] 종료(stop)\n\n");

	printf("[이전단위] --> [변환단위], 두 개의 메뉴번호를 선택하세요. >> ");
	scanf("%d %d", &num1, &num2);
	


	while (1) {

		printf("\n[변환할 단위]의 길이를 입력하세요. >> ");
		scanf("%lf", &dbl);

		if (dbl == 0) {
			printf("\n종료합니다.\n");
			break;
		}

		if (num1 == 1) {
			if (num2 == 2) {
				printf("\n [결과] %.2lf(미터) --> %.2lf(인치)\n\n", dbl, dbl*39.370079);
			}
			else if (num2 == 3) {
				printf("\n [결과] %.2lf(미터) --> %.2lf(피트)\n", dbl, dbl*3.28084);
			}
			else if (num2 == 4) {
				printf("\n [결과] %.2lf(미터) --> %.2lf(야드)\n", dbl, dbl*1.093613);
			}
		}
		else if (num1 == 2) {
			if (num2 == 1) {
				printf("\n [결과] %.2lf(인치) --> %.2lf(미터)\n", dbl, dbl*0.0254);
			}
			else if (num2 == 3) {
				printf("\n [결과] %.2lf(인치) --> %.2lf(피트)\n", dbl, dbl*0.083333);
			}
			else if (num2 == 4) {
				printf("\n [결과] %.2lf(인치) --> %.2lf(야드)\n", dbl, dbl*0.027778);
			}
		}
		else if (num1 == 3) {
			if (num2 == 1) {
				printf("\n [결과] %.2lf(피트) --> %.2lf(미터)\n", dbl, dbl*0.3048);
			}
			else if (num2 == 2) {
				printf("\n [결과] %.2lf(피트) --> %.2lf(인치)\n", dbl, dbl * 12);
			}
			else if (num2 == 4) {
				printf("\n [결과] %.2lf(피트) --> %.2lf(야드)\n", dbl, dbl*0.333333);
			}
		}
		else if (num1 == 4) {
			if (num2 == 1) {
				printf("\n [결과] %.2lf(야드) --> %.2lf(미터)\n", dbl, dbl*0.9144);
			}
			else if (num2 == 2) {
				printf("\n [결과] %.2lf(야드) --> %.2lf(인치)\n", dbl, dbl * 36);
			}
			else if (num2 == 3) {
				printf("\n [결과] %.2lf(야드) --> %.2lf(피트)\n", dbl, dbl * 3);
			}
		}
	}
}
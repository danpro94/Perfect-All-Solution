//삼각형 만들기

#include <stdio.h>

int main() {
	int n;
	int count = 0;

	for (int i = 1; i <= 10; ) {

		for (int j = 1; j <= 257; j++) {

			n = 0;
			for (int m = 1; m <= j; m++) {
				if (j % m == 0) n++;
			}

			if (n == 2) {
				if (count == 0) {
					for (int j = 10 - i; j >= 0; j--) {
						printf("  ");
					}
				}

				printf(" %d ", j);
				count++;

				if (count == i) {
					printf("\n");
					count = 0;
					i++;
				}
			}
		}
	}
}

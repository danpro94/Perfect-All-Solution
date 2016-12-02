#include <stdio.h>
int main(void)
{
	int a = 3, b = 5;
	int add2(int a, int b);

	int sum = add2(a, b);
	printf("합: %d\n", sum);

	return 0;
}

int add2(int a, int b)
{
	int sum = a + b;
	return (sum);
}

int findMin2(int x, int y)	//정의만 됐을 뿐 호출이 없기
{								//때문에 실행은 되지 않음
	int min = x < y ? x : y;

	return (min);
}
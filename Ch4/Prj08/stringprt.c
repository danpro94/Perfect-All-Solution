// file: stringprt.c

#include <stdio.h>

int main(void)
{
	printf("사계절은 봄 여름 가을 겨울이다.\n");
	printf("사계절은 %s %s %s %s이다.\n\n", "봄", "여름", "가을", "겨울");
	printf("%s\n", "123456789012345");
	printf("%10.3s\n", "Hello!");
	printf("%-10.3s\n", "Hello!");
	printf("%4s\n", "Hello!");
	printf("%10.*s\n\n", 5, "Hello!");

	printf("%s\n", "123456789012345");
	printf("%s\n", "Hi, C language!");
	//전체폭 10에서 3개의 문자만 출력, 기본이 오른쪽 정렬
	printf("%10.3s\n", "Hi, C language!");
	//전체폭 10에서 3개의 문자문 출력, -는 왼쪽정렬
	printf("%-10.3s\n", "Hi, C language!");
	//*는 정밀도를 입력으로 받아 지정, 정밀도가 3이므로 %10.3f 로 출력
	printf("%10.*f\n", 3, 124.56789);

	//형식 문자열 내부에서는 %%가 % 출력
	printf("%10.2f%%\n", 3.25);
	//문자열 인자 내부에서는 %가 % 출력
	printf("%0+10.1f%s\n", 3.25, "%");

	return 0;
}
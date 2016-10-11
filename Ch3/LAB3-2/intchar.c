// intchar.c: 아스키 코드값 126 문자 '~'의 다양한 출력

#include <stdio.h>

int main(void)
{
	int ch = 126;

	printf("%d\n", ch);		//십진 코드값 출력
	printf("%c\n", ch);		//문자 출력
	printf("%c\n", '\176');	//문자 출력
	printf("%c\n", '\x7e');	//문자 출력

	return 0;
}
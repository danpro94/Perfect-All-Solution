// file: basicmacro.c

#include <stdio.h>

#define myprint(x) printf(x); \
puts("")

int main(void)
{
	myprint("매크로 출력하기");
	printf("출력함수로 출력하기\n");

	return 0;
}
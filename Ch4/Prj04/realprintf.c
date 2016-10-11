// file: realprintf.c

#include <stdio.h>

int main(void)
{
	float f = 3.1415F;
	double d = 42.3876547;

	printf("%f %lf\n", f, f);
	printf("%f %lf\n", d, d);

	return 0;
}
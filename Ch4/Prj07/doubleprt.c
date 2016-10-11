// file: dooubleprt.c

#include <stdio.h>

int main(void)
{
	printf("%f %s\n", 123456.789, "\t%f");
	printf("%14.4f %s\n", 123456.789, "\t%10.3f");
	printf("%e %s\n", 123456.789, "\t%e");
	printf("%10.3E %s\n", 123456.789, "\t%10.3E");
	printf("%g %s\n", 12.34e-5, "\t%g");
	printf("%G %s\n", 12.34e-6, "\t%G");

	return 0;
}
// file: specification.c

#include <stdio.h>

int main(void)
{
	printf("%010d %s\n", 12345, "%010d");
	printf("%010d %s\n\n", 12344, "%+010d");
	printf("%10o %s\n", 271, "%10o");
	printf("%0#10o %s\n", 271, "%0#10o");
	printf("%-#10o %s\n\n", 271, "%-#10o");
	printf("%0#10x %s\n", 271, "%0#10x");
	printf("%-#10X %s\n\n", 271, "%-#10X");

	printf("%d %s\n", 32768, "%d");
	printf("%hd %s\n", 32768, "%hd");

	return 0;
}
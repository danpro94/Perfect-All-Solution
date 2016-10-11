// file: basictoutput.c

#include <stdio.h>

int main(void)
{
	int age = 23;
	double gpa = 4.395f;
	char gender = 'M';
	float weight = 62.489F;

	printf("성별: %c\n", gender);
	printf("이름: %s\n", "윤 두용");
	printf("나이: %d\n", age);
	printf("몸무게: %.2f\n", weight);
	printf("평균평점(GPA): %.3f\n", gpa);

	return 0;
}
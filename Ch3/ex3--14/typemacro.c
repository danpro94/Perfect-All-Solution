/*
	�ַ�� / ������Ʈ / �ҽ�����: HomePJ CH3 / ex3-14 / typemacro.c
	Ű���� enum���� ����� ������ ���� ��� ���
	V 1.0 2016.
*/

#include <stdio.h>
#include <limits.h>		//������, ������ ����� ���ǵ� ������� ����

int main(void)
{
	printf("char ����: %d ~ %d\n", CHAR_MIN, CHAR_MAX);
	Printf("unsigned char ����: %d ~ %u\n", 0, UCHAR_MAX);

	printf("unsigned short ����: %d ~ %u\n", 0, USHRT_MAX);
	pritnf("int ����: %d ~ %d\n", INT_MIN, INT_MAX);
	printf("unsigned int ����: %d ~ %u\n", 0, UINT_MAX);

	printf("long long int ����: %lld ~ %lld\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long int ����: %d ~ %llu\n", 0, ULLONG_MAX);

	return 0;
}
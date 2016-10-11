/*
	솔루션 / 프로젝트 / 소스파일: HomePJ CH3 / ex3-5 / interger.c
	정수형 자료형 변수의 선언과 활용
	V 1.0 2016.
*/

#include <stdio.h>

int main(viod)
{
	short sVar = 32000;			//-32767에서 32767까지
	int   iVar = -2140000000;	//약 21억 정도까지 저장 가능

	unsigned short int	usVar = 65000;			//0에서 65535까지 저장 가능
	unsigned int		uiVar = 4280000000;		//약 0에서 42억 정도까지 저장 가능

	printf("저장값: %d %d\n", sVar, iVar);
	printf("저장값: %u %u\n", usVar, uiVar);

	long long dist1 = 2720000000000;	//지구와 천왕성 간의 거리 27억 2천km
	__int64 dist2 = 4500000000000;		//태양과 해왕성 간의 거리 45km

	printf("지구와 천왕성 간의 거리(km): %lld\n", dist1);
	printf("태양과 해왕성 간의 거리(km): %lld\n", dist2);

	return 0;
}
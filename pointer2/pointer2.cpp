#include <stdio.h>

void swap(int *ab, int *cd); // 두 변수의 값을 바꾸는 함수의 선언

void swap(int x, int y); // 두 변수의 값을 바꾸는 함수의 선언

int main(void) {
	
	char ch;
	int in;
	double db;

	char *pc = &ch;
	int *pi = &in;
	double *pd = &db;

	printf("char형 변수의 크기 : %d\n", sizeof(&ch));
	printf("int형 변수의 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 크기 : %d\n", sizeof(&db));

	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
	printf("double * 포인터의 크기 : %d\n", sizeof(pd));

	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
	printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));

	/*
	int a = 10; // 변수 선언과 초기화
	int *pdd = &a; // 포인터 선언과 동시에 a를 가리키도록 초기화
	double *pde; // double형 변수를 가리키는 포인터

	pdd = pdd; // 포인터 pdd값을 포인터 c에 대입
	printf("%1f\n", *pde); // pdd가 가리키는 변수의 값 출력
	*/

	int ab = 10, cd = 20; // 변수 선언과 초기화

	swap(&ab, &cd); // 인수 없이 함수 호출
	printf("ab :%d, cd : %d\n", ab, cd); // 변수 ab,cd 출력

	swap(ab, cd); // ab,cd의 값을 복사해서 전달
	printf("ab : %d, cd : %d\n", ab, cd); // 변수 ab,cd 출력

	return 0;
}

void swap(int *ab, int *cd) { // 매개변수로 포인터 선언
	int temp; // 교환을 위한 임시 변수

	temp = *ab; // temp에 ab가 가리키는 변수의 값 저장
	*ab = *cd; // ab가 가리키는 변수에 cd가 가리키는 변수의 값 저장
	*cd = temp; // cd가 가리키는 변수에 temp값 저장
}

void swap(int x, int y) { // 인수 ab, cd의 값을 x, y에 복사해서 저장
	int temp; // 교환을 위한 변수

	temp = x; // temp에 x값 저장
	x = y; // x에 y값 저장
	y = temp; // y에 temp값 저장
}
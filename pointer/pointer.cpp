#include <stdio.h>

int main(void) {
	int a; // int형 변수 선언
	double b; // double형 변수 선언
	char c; // char형 변수 선언

	printf("int형 변수의 주소 : %u\n", &a); // 주소 연산자로 주소 계산
	printf("double형 변수의 주소 : %u\n", &b);
	printf("char형 변수의 주소 : %u\n", &c);

	int d; // 일반 변수 선언
	int *pd; // 포인터 선언

	pd = &d; // 포인터에 d의 주소 대입
	*pd = 10; // 포인터로 변수 d에 10 대입

	printf("포인터로 d값 출력 : %d\n", *pd);
	printf("변수명으로 d값 출력 : %u\n", d); // 변수 d값 출력

	int aa = 10, bb = 15, tot; // 변수 선언과 초기화
	double avg; // 평균을 저장할 변수
	int *paa, *pbb; // 포인터 동시 선언
	int *pt = &tot; // 포인터 선언과 초기화
	double *pg = &avg; // double형 포인터 선언과 초기화

	paa = &aa; // 포인터 paa에 변수 aa의 주소 대입
	pbb = &bb; // 포인터 pbb에 변수 bb의 주소 대입

	*pt = *paa + *pbb; // aa값과 bb값을 더해 tot에 저장
	*pg = *pt / 2.0; // tot값을 2로 나눈 값을 avg에 저장

	printf("두 정수의 값 : %d, %d\n", *paa, *pbb); // aa값과 bb값 출력
	printf("두 정수의 합 : %d\n", *pt); // tot값 출력
	printf("두 정수의 평균 : %.1lf\n", *pg); // avg값 출력

	int cc = 10, dd = 20;
	const int *pc = &cc; // 포인터 pc는 변수 cc를 가리킨다.

	printf("변수 cc의 값 : %d\n", *pc); // 포인터를 간접 참조하여 cc 출력
	pc = &dd; // 포인터가 변수 dd를 가리키게 한다.
	printf("변수 dd 값 : %d\n", *pc); // 포인터가 간접 참조하여 dd값 출력
	pc = &cc; // 포인터가 다시 변수 cc를 가리킨다.
	cc = 20; // cc를 직접 참조하여 값을 바꾼다.
	printf("변수 cc 값 : %d\n", *pc); // 포인터로 간접 참조하여 바뀐 값 출력

	return 0;
}
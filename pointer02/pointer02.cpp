#include <stdio.h>

/* void swap_ptr(char **ppa, char **ppb); */

/* void print_str(char **pps, int cnt); */

void print_ary(int (*)[4]);

int main(void) {
	/*
	int a = 10; // int형 변수의 선언과 초기화
	int *pi; // 포인터 선언
	int **ppi; // 2중 포인터 선언

	pi = &a; // int형 변수의 주소를 포인터에 저장
	ppi = &pi; // 포인터의 주소를 2중 포인터에 저장

	printf("----------------------------------------------------\n");
	printf("변수 변수값 &연산 *연산 **연산\n");
	printf("----------------------------------------------------\n");
	printf(" a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("----------------------------------------------------\n");
	*/

	/*
	char *pa = "success";
	char *pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb); // 바꾸기 전에 문자열 출력
	swap_ptr(&pa, &pb); // 함수 호출
	printf("pa -> %s, pb -> %s\n", pa, pb); // 바꾼 후에 문자열 출력
	*/

	/*
	char *ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // 초기화
	int count; // 배열 요소 수를 저장할 변수

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); // 배열 요소의 수 계산
	print_str(ptr_ary, count); // 배열명과 배열 요소 수를 주고 호출
	*/

	/*
	int ary[5];

	printf("ary의 값 : %u\n", ary); // 주소로서의 배열명의 값
	printf("ary의 주소 : %u\n", &ary); // 배열의 주소

	printf("ary + 1 : %u\n", ary + 1);
	printf("&ary + 1 : %u\n", &ary + 1);
	*/

	/*
	int ary[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	int(*pa)[4]; // int형 변수 4개의 배열을 가리키는 배열 포인터
	int i, j;

	pa = ary;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", pa[i][j]); // pa를 2차원 배열처럼 사용
		}
		printf("\n");
	}
	*/

	int ary[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };

	print_ary(ary); // 배열명을 인수로 주고 함수 호출

	return 0;
}

/*
void swap_ptr(char **ppa, char **ppb) {
	char *pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}
*/

/*
void print_str(char **pps, int cnt) { // 매개변수로 2중 포인터 사용
	int i;

	for (i = 0; i < cnt; i++) { // 배열 요소 수만큼 반복
		printf("%s\n", pps[i]); // 2중 포인터를 배열명처럼 사용
	}
}
*/

void print_ary(int (*pa)[4]) {
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", pa[i][j]); // pa를 2차원 배열처럼 사용
		}
		printf("\n");
	}
}
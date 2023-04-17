#include <stdio.h>

int main(void) {
	/*
	int ary[5] = { 10, 20, 30, 40, 50 };

	printf("배열명 자체의 값 : %u\n", ary);
	printf("첫 번째 배열 요소의 주소 : %u\n", &ary[0]);
	printf("배열명이 가리키는 요소의 값 : %d\n", *ary);
	printf("첫 번째 배열 요소의 값 : %d\n", ary[0]);
	*/

	/*
	int ary[3];
	int i;

	*(ary + 0) = 10; // ary[0] = 10
	*(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10

	printf("세 번째 배열 요소에 키보드 입력 : ");
	scanf("%d", ary + 2); // ary[2]

	for (i = 0; i < 3; i++) { // 모든 배열 요소 출력
		printf("%5d", *(ary + i)); // ary[i]
	}
	*/

	/*
	int ary[3]; // 배열 선언
	int *pa = ary; // 포인터에 배열명 저장
	int i; // 반복 제어 변수

	*pa = 10; // 첫 번째 배열 요소에 10 대입
	*(pa + 1) = 20; // 두 번째 배열 요소에 20 대입
	pa[2] = pa[0] + pa[1]; // 대괄호를 써서 pa를 배열명처럼 사용

	for (i = 0; i < 3; i++) {
		printf("%5d", pa[i]); // 포인터로 모든 배열 요소 출력
	}
	*/

	/*
	int ary[3] = { 10, 20, 30 };
	int *pa = ary;
	int i;

	printf("배열의 값 : ");
	for (i = 0; i < 3; i++) {
		printf("%d", *pa); // pa가 가리키는 배열 요소 출력
		pa++; // 다음 배열 요소를 가리키도록 pa값 증가
	}
	*/

	int ary[5] = { 10, 20, 30, 40, 50 };
	int *pa = ary; // 첫 번째 배열 요소 주소
	int *pb = pa + 3; // 네 번째 배열 요소 주소

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++; // pa를 다음 배열 요소로 이동
	printf("pb - pa : %u\n", pb - pa); // 두 포인터의 뺄샘

	printf("앞에 있는 배열 요소의 값 출력 : ");

	if (pa < pb) { // pa가 배열의 앞에 있으면 *pa 출력
		printf("%d\n", *pa);
	} else { // pb가 배열의 앞에 있으면 *pb 출력
		printf("%d\n", *pb);
	}

	return 0;
}
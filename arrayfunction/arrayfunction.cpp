#include <stdio.h>

/*
void print_ary(int *pa); // 함수 선언
*/

void print_ary(int *pa, int size); // 함수 선언, 매개변수 2개

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void) {
	/*
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary); // 배열명을 주고 함수 호출
	*/

	int ary1[5] = { 10, 20, 30, 40, 50 }; // 배열 요소 수가 5개인 배열
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 }; // 배열 요소 수가 7개인 배열

	print_ary(ary1, 5); // ary1 배열 출력, 배열 요소 수 전달
	printf("\n");
	print_ary(ary2, 7); // ary2 배열 출력, 배열 요소 수 전달

	double ary[5];
	double max; // 최대값을 저장할 변수
	int size = sizeof(ary) / sizeof(ary[0]); // 배열 요소 수 계산

	input_ary(ary, size); // 배열에 값 입력
	max = find_max(ary, size); // 배열의 최대값 반환
	printf("배열의 최대값 : %.1lf\n", max);

	return 0;
}

/*
void print_ary(int *pa) { // 매개변수로 포인터 선언
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d ", pa[i]); // pa로 배열 요소 표현식 사용
	}
}
*/

void print_ary(int *pa, int size) { // 배열 요소 수를 받는 매개 변수 선언
	int i;

	for (i = 0; i < size; i++) { // size의 값에 따라 반복 횟수 결정
		printf("%d ", pa[i]);
	}
}

void input_ary(double *pa, int size) { // double 포인터를 매개변수로 선언
	int i;

	printf("%d개의 실수값 입력 : ", size);

	for (i = 0; i < size; i++) { // size의 값에 따라 반복 횟수 결정
		scanf("%1f", pa + i); // &pa[i]도 가능, 입력할 배열 요소의 주소를 전달
	}
}

double find_max(double *pa, int size) {
	double max;
	int i;

	max = pa[0]; // 첫 번째 배열 요소의 값을 최대값으로 설정
	
	for (i = 1; i < size; i++) { //두 번째 배열 요소부터 max와 비교
		if (pa[i] > max) {
			max = pa[i]; // 새로운 배열 요소의 값이 max보다 크면 대입
		}
	}

	return max; // 최대값 반환
}
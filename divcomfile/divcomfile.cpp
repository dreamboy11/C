#include <stdio.h>

/*
void input_data(int *, int *); // 두 정수를 입력하는 함수 선언
double average(int, int); // 평균을 구하는 함수 선언
*/
int input_data(void); // 양수를 입력하고 그 합을 반환
double average(void); // 평균을 구하는 함수
void print_data(double); // 출력 함수

int cnt = 0; // 입력한 양수의 수 누적
static int tot = 0; // 입력한 양수의 합


int main(void) {
	/*
	int a, b;
	double avg;

	input_data(&a, &b); // 두 정수 입력
	avg = average(a, b); // 평균 계산
	printf("%d와 %d의 평균 : %.1lf\n", a, b, avg); // 입력값과 평균 출력
	*/

	double avg; // 입력한 양수의 평균

	tot = input_data(); // 양수를 입력하고 그 합을 반환
	avg = average(); // 평균 계산
	print_data(avg);

	return 0;
}


void print_data(double avg) {
	printf("입력한 양수의 개수 : %d\n", cnt);
	printf("전체 합과 평균 : %d, %.1lf\n", tot, avg);
}

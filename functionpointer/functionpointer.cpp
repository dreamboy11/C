#include <stdio.h>

/* int sum(int, int); // 함수 선언 */

/*
void func(int (*fp)(int, int)); // 함수 포인터를 매개변수로 갖는 함수
int sum(int a, int b); // 두 정수를 더하는 함수
int mul(int a, int b); // 두 정수를 곱하는 함수
int max(int a, int b); // 두 정수 중에 큰 값을 구하는 함수
*/

int main(void) {
	/*
	int(*fp)(int, int); // 함수 포인터 선언
	int res; // 반환값을 저장할 변수

	fp = sum; // 함수명을 함수 포인터에 저장
	res = fp(10, 20); // 함수 포인터로 함수 호출
	printf("result : %d\n", res); // 반환값 출력
	*/

	/*
	int sel; // 선택된 메뉴 번호를 저장할 변수

	printf("1. 두 정수의 합\n"); // 메뉴 출력
	printf("2. 두 정수의 곱\n");
	printf("3. 두 정수 중에서 큰 값 계산\n");
	printf("원하는 작업을 선택하세요 : ");

	scanf("%d", &sel); // 메뉴 번호 입력

	switch (sel) {
		case 1: func(sum); // 1이면 func에 덧셈 기능 추가
		break;
		case 2: func(mul); // 2이면 func에 곱셈 기능 추가
		break;
		case 3: func(max); // 3이면 func에 큰 값 구하는 기능 추가
	    break;
	}
	*/

	int a = 10; // int형 변수
	double b = 3.5; // double형 변수
	void *vp; // void 포인터

	vp = &a; // int형 변수의 주소 저장
	printf("a : %d\n", * (int *)vp);

	vp = &b; // double형 변수의 주소 저장
	printf("b : %.1lf\n", * (double *)vp);

	return 0;
}

/*
int sum(int a, int b) {
	return (a + b);
}
*/

/*
void func(int (*fp)(int, int)) {
	int a, b; // 두 정수를 저장할 변수
	int res; // 함수의 반환값을 저장할 변수

	printf("두 정수값을 입력하세요 : ");
	scanf("%d%d", &a, &b); // 두 정수 입력
	res = fp(a, b); // 함수 포인터로 가리키는 함수를 호출
	printf("결과값은 : %d\n", res); // 반환값 출력
}

int sum(int a, int b) { // 덧셈 함수
	return (a + b);
}

int mul(int a, int b) { // 곱셈 함수
	return (a * b);
}

int max(int a, int b) { // 큰 값을 구하는 함수
	if (a > b) {
		return a;
	} else {
		return b;
	}
}
*/
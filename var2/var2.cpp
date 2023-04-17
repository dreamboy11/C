#include <stdio.h>

/* void add_ten(int a); // 함수 선언 */

/* void add_ten(int *p); // 매개변수로 포인터 선언 */

int *sum(int a, int b); // int형 변수의 주소를 반환하는 함수 선언

int main(void) {
	/*
	int a = 10;

	add_ten(a); // a값을 복사하여 전달
	printf("a : %d\n", a);
	*/

	/*
	int a = 10;

	add_ten(&a); // a의 주소를 인수로 준다.
	printf("a : %d\n", a); // 증가된 a값 출력
	*/

	int *p; // 반환값을 저장할 포인터

	p = sum(10, 20); // 반환된 주소는 p에 저장
	printf("두 정수의 합 : %d\n", *p); // p가 가리키는 변수값 출력

	return 0;
}

/*
void add_ten(int a) { // 7행의 a와 다른 독립적인 저장 공간 할당
	a = a + 10; // 15행의 매개변수 a에 10을 더한다.
}
*/

/*
void add_ten(int *p) {
	*p = *p + 10; // 포인터 p가 가리키는 변수의 값 10 증가
}
*/

int *sum(int a, int b) { // int형 변수의 주소를 반환하는 함수
	static int res; // 정적 지역 변수

	res = a + b; // 두 정수의 합을 res에 저장

	return &res; // 정적 지역 변수의 주소 반환
}
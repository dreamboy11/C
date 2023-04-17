#include <stdio.h>

int main(void) {
	int a, b;
	int sum, sub, mul, inv;

	a = 10; // 대입 연산
	b = 20; // 대입 연산
	sum = a + b; // 더하기 연산 후 대입 연산
	sub = a - b; // 빼기 연산 후 대입 연산
	mul = a * b; // 곱하기 연산 후 대입 연산
	inv = -a; // 음수 연산 후 대입 연산

	printf("a의 값 :%d, b의 값 : %d\n", a, b);
	printf("덧셈 : %d\n", sum);
	printf("뺄셈 : %d\n", sub);
	printf("곱셈 : %d\n", mul);
	printf("a의 음수연산 : %d\n", inv);

	double apple;
	int banana;
	int orange;

	apple = 5.0 / 2.0; // 실수와 실수의 나눗셈 연산
	banana = 5 / 2; // 정수와 정수의 나눗셈 연산
	orange = 5 % 2; // 정수와 정수의 나머지 연산

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	int c = 10, d = 10;

	++a; // 변수의 값을 1만큼 증가
	--b; // 변수의 값을 1만큼 감소

	printf("c : %d\n", a);
	printf("d : %d\n", b);

	int e = 5, f = 5;
	int pre, post;

	pre = (++a) * 3; // 전위형 증감 연산자
	post = (b++) * 3; // 후위형 증감 연산자

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형: (++a) * 3 = %d, 후위형: (b++) * 3 = %d\n", pre, post);

	int g = 10, h = 10, i = 10;
	int res; // 결과(result)값을 저장할 변수

	res = (g > h); // g가 h보다 크지 않으므로 결과값은 0
	printf("g > h : %d\n", res);

	res = (g >= h); // g가 h보다 크지도 않고 같지도 않으므로 결과값은 0
	printf("g >= h : %d\n", res);

	res = (g < h); // g가 h보다 작으므로 결과값은 1
	printf("g < h : %d\n", res);

	res = (g <= h); // g가 h보다 작으므로 결과값은 1
	printf("g <= h : %d\n", res);

	res = (g <= i); // g가 i보다 작지는 않으나 같으므로 결과값은 1
	printf("g <= i : %d\n", res);

	res = (g == i); // g가 i가 같지 않으므로 결과값은 0
	printf("g == i : %d\n", res);

	res = (g != i); // g가 i가 같으므로 결과값은 0
	printf("g != i : %d\n", res);

	int j = 30;
	int res2;

	res2 = (j > 10) && (j < 20); // 좌항과 우항이 모두 참이면 참
	printf("(j > 10 && (j < 20) : %d\n", res2);

	res2 = (j < 10) || (j < 20); // 좌항과 우항 중 하나라도 참이면 참
	printf("(j < 10 || (j < 20) : %d\n", res2);

	res2 = !(j >= 30); // 거짓이면 참으로, 참이면 거짓으로
	printf("!(j >= 30) : %d\n", res2);

	int k = 10, l = 20, res3;

	k + j; // 연산 결과는 버려짐
	printf("%d + %d = %d\n", k, l, k + l); // 연산 결과를 바로 출력에 사용

	res3 = k + l; // 연산 결과는 변수에 저장
	printf("%d + %d = %d\n", k, l, res3); // 저장된 연산 결과는 계속 사용

	return 0;
}
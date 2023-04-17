#include <stdio.h>

int main(void) {
	int a = 20;
	int b = 0;

	if (a > 10) { // a가 10보다 크므로 조건식은 참
		b = a; // b = a 대입문 실행
	}

	printf("a : %d, b : %d\n", a, b); // 대입이 수행되면 두 값은 같음

	int c = 10;

	if (c >= 0) {
		c = 1; // c가 0보다 크거나 같으면 c에 1 대입
	}
	else {
		c = -1; // c가 0보다 작으면 c에 -1 대입
	}

	printf("c : %d\n", c);

	int d = 0, e = 0;

	if (d > 0) { // d가 0보다 크면 e에 1 대입
		e = 1;
	}
	else if (c == 0) { // d가 0이면 e에 2 대입
		e = 2;
	}
	else { // d가 0보다 크지 않고 0도 아니면 e에 3 대입
		e = 3;
	}

	printf("e : %d\n", e); // if문으로 결정된 e값 출력

	return 0;
}
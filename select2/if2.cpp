#include <stdio.h>

int main(void) {
	int a = 20, b = 10;

	if (a > 10) { // a가 10보다 크면 아래 문장 실행, 작거나 같으면 맨 아래로 이동
		if (b >= 0) { // b가 0 이상이면 b에 1 대입하고 맨 아래로 이동
			b = 1;
		}
		else {
			b = -1; // b가 0보다 작으면 b에 -1 대입하고 맨 아래로 이동
		}
	}

	printf("a : %d, b : %d\n", a, b);

	int c = 10, d = 20;

	if (c < 0) { // c가 0보다 작지만
		if (d > 0) { // d가 0보다 크면 ok 출력
			printf("ok");
		}
	}
	else { // c가 0 이상이면 ok 출력
		printf("ok");
	}

	int rank = 2, m = 0;

	switch (rank) { // rank의 값이 얼마인지 확인
		case 1: // rank가 1이면
			m = 300; // m = 300을 수행하고
			break; // 블록을 벗어나 맨 아래로 이동
		case 2: // rank가 2면
			m = 200; // m = 200을 수행하고
			break; // 블록을 벗어나 맨 아래로 이동
		case 3: // rank가 3이면
			m = 100; // m = 100을 수행하고
			break; // 블록을 벗어나 맨 아래로 이동
		default: // rank와 일치하는 case의 값이 없으면
			m = 10; // m = 10을 수행하고
			break; // 블록을 벗어나 맨 아래로 이동
	}

	printf("m : %d\n", m);
	

	return 0;
}
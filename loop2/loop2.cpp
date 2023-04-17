#include <stdio.h>

int main(void) {
	int i, j; // 반복 횟수를 세기 위한 제어 변수

	for (i = 0; i < 3; i++) { // i가 0부터 2까지 증가하면서 3번 반복
		for (j = 0; j < 5; j++) { // j가 0부터 4까지 증가하면서 5번 반복
			printf("*"); // 별 출력문
		}
		printf("\n"); // 별을 5번 출력한 후에 줄을 바꾼다.
	}

	int a, b; // 반복 횟수를 세기 위한 제어 변수
	
	for (a = 2; a <= 9; a++) { // a가 2에서 9까지 변하면서 8번 반복
		for (b = 1; b <= 9; b++) { // b가 0부터 9까지 변하면서 8번 반복
			printf("%d * %d = %d\n", a, b, a * b); // 반복 제어 변수 a와 b 활용
		}
	}

	int c, d;

	for (c = 0; c < 5; c++) {
		for (d = 0; d < 1 + c; d++) {
			printf("*");
		}
		printf("\n");
	}

	int ab; // 반복 횟수를 세기 위한 제어 변수
	int sum = 0; // 1부터 10까지의 합을 누적할 변수

	for (ab = 1; ab <= 10; ab++) { // ab는 1부터 10까지 증가하면서 10번 반복
		sum += ab; // ab값을 sum에 누적
		if (sum > 30) { // 누적한 값이 30보다 크면 반복문을 끝낸다.
			break;
		}
	}
	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", ab);

	return 0;
}
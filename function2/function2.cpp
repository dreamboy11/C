#include <stdio.h>

int get_pos(void); // 함수 선언

void print_char(char ch, int cnt); // 함수 선언

void print_line(void); // 함수 선언

void fruit(int n); // 함수 선언

int main(void) {
	int res;

	res = get_pos(); // 함수 호출, 반환값은 res에 저장
	printf("반환값: %d\n", res); // 반환값 출력

	print_char('@', 5); // 문자와 숫자를 주고 함수 호출

	print_line(); // 함수 호출
	printf("학번  이름  전공  학점\n");
	print_line(); // 함수 호출

	fruit(1); // 처음 호출하므로 1을 인수로 줌

	return 0;
}

int get_pos(void) { // 매개변수가 없고 반환형만 있음
	int pos; // 키보드 입력값을 저장할 변수

	printf("양수 입력 : "); // 입력 안내 메시지
	scanf("%d", &pos); // 키보드 입력

	return pos; // 입력한 값 반환
}

void print_char(char ch, int cnt) { // 매개변수는 있으나 반환형은 없음
	int i;

	for (i = 0; i < cnt; i++) { // i는 0부터 cnt-1까지 증가 후 cnt번 반복
		printf("%c", ch); // 매개변수 ch에 받은 문자 출력
	}
}

void print_line(void) {
	int i;

	for (i = 0; i < 50; i++) { // 50번 반복하여 '-' 출력
		printf("-");
	}
	printf("\n");
}

void fruit(int n) { // 호출 횟수를 매개변수에 저장
	printf("apple\n");
	if (n == 3) { // 호출 횟수가 3이면 반환하고 끝냄
		return;
	}
	fruit(n + 1); // 재호출 할 때 호출 횟수를 1 증가
	printf("jam\n");
}
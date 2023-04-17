#include <stdio.h>

int main(void) {
	printf("%d\n", 12); // 10진수 정수형 상수 출력
	printf("%d\n", 014); // 8진수 정수형 상수 출력
	printf("%d\n", 0xc); // 16진수 정수형 상수 출력

	printf("%.1lf\n", 1e6); // 지수 형태의 실수를 소수점 형태로 출력
	printf("%.71f\n", 3.14e-5); // 소수점 이하 7자리까지 출력

	printf("%c\n", 'A'); // 문자 상수 출력
	printf("%s\n", "A"); // 문자열 상수 출력
	printf("%c은 %s입니다.\n", '1', "first"); // 문자와 문자열을 함께 출력

	return 0;
}
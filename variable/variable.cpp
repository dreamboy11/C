#include <stdio.h>
#include <string.h> // string.h 헤더 파일 포함

int main(void) {
	int a; // int형 변수 선언
	int b, c; // 두 개의 int형 변수를 동시 선언
	double da; // double형 변수 선언
	char ch; // char형 변수 선언

	a = 10; // int형 변수 a에 정수 10 대입
	b = a; // int형 변수 b에 변수 a의 값 대입
	c = a + 20; // int형 변수 c에 변수 a의 값과 정수 20을 더한 값 대입
	da = 3.5; // double형 변수 da에 실수 3.5 대입
	ch = 'A'; // char형 변수 ch에 문자 'A' 대입

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);

	int e; // 9행에서 대입 연산으로 초기화
	int f = 20; // 변수 선언과 동시에 초기화
	int g; // 초기화하지 않음

	e = 10; // e에 10 대입, 초기화
	printf("e:%d\n", e);
	printf("f:%d\n", f);
	printf("g:%d\n", g);

	char ch1 = 'A';
	char ch2 = 65;

	printf("문자 %c의 아스키 코드값 : %d\n", ch1, ch1);
	printf("아스키 코드값이 %d인 문자 : %c\n", ch2, ch2);

	short sh = 32767;
	int in = -2147483648;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long형 변수 출력 : %1d\n", ln);
	printf("long long형 변수 출력 : %11d\n", lln);

	unsigned int h;

	h = 4294967295; // 큰 양수 저장
	printf("%d\n", h); // %로 출력
	h = -1; // 음수 저장
	printf("%u\n", h); // %u로 출력

	float ft = 1.234567890123456789; // 유효숫자가 많은 값으로 초기화
	double db = 1.234567890123456789;

	printf("float형 변수의 값 : %.20f\n", ft); // 소수점 이하 20자리까지 출력
	printf("double형 변수의 값 : %.20lf\n", db);

	char fruit[20] = "strawberry";

	printf("딸기 : %s\n", fruit);
	printf("딸기쨈 : %s %s\n", fruit, "jam");
	printf("좋아하는 과일 : %s\n", fruit);

	char fruit2[20] = "strawberry"; // strawberry 초기화

	printf("%s\n", fruit2); // strawberry 출력
	strcpy(fruit2, "banana"); // fruit2에 banana 복사
	printf("%s\n", fruit2); // banana 출력

	int income = 0; // 소득액 초기화
	double tax; // 세금
	const double tax_rate = 0.12; // 세율 초기화

	income = 456; // 소득액 저장
	tax = income * tax_rate; // 세금 계산
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}
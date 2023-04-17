#include <stdio.h>

int main(void) {
	// int a;

	// scanf("%d", &a); // 여기서 변수 a에 값 입력
	// printf("입력된 값 : %d\n", a); // 입력한 값 출력

	// short b;

	// scanf("%hd", &b); // 여기서 변수 b에 값 입력
	// printf("입력된 값 : %hd\n", b); // 입력한 값 출력

	// long c;

	// scanf("%ld", &c); // 여기서 변수 c에 값 입력
	// printf("입력된 값 : %ld\n", c); // 입력한 값 출력

	// long long d;

	// scanf("%lld", &d); // 여기서 변수 d에 값 입력
	// printf("입력된 값 : %lld\n", d); // 입력한 값 출력

	// char e;

	// scanf("%c", &e); // 여기서 변수 e에 값 입력
	// printf("입력된 값 : %c\n", e); // 입력한 값 출력

	// float f;

	// scanf("%lf", &f); // 여기서 변수 f에 값 입력
	// printf("입력된 값 : %lf\n", f); // 입력한 값 출력

	/*
	int age;
	double height;

	printf("나이와 키를 입력하세요 : "); // 입력 안내 메시지 출력
	scanf("%d%lf", &age, &height); // 나이와 키를 함께 입력
	printf("나이는 %d살, 키는 %.1lfcm입니다\n", age, height); // 입력값 출력
	*/

	char grade; // 학점을 입력할 변수
	char name[20]; // 이름을 입력할 배열

	printf("학점 입력 : ");
	scanf("%c", &grade); // grade 변수에 학점 문자 입력
	printf("이름 입력 : ");
	scanf("%s", name); // name 배열에 이름 문자열 입력, &를 사용하지 않음
	printf("%s의 학점은 %c입니다.\n", name, grade);



	return 0;
}
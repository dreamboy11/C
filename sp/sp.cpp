#include <stdio.h>

int main(void) {
	printf("주소값 : %p\n", "mango"); // 주소값 출력
	printf("첫 번째 문자 : %c\n", *"mango"); // 간접참조 연산
	printf("두 번째 문자 : %c\n", *("mango" + 1)); // 포인터 연산식
	printf("세 번째 문자 : %c\n", "mango"[2]); // 배열 표현식

	char *dessert = "apple"; // 포인터에 문자열 초기화

	printf("오늘 후식은 %s입니다.\n", dessert); // 문자열 출력
	dessert = "banana"; // 새로운 문자열 대입
	printf("내일 후식은 %s입니다.\n", dessert); // 바뀐 문자열 출력

	/*
	char str[80];

	printf("문자열 입력 : ");
	scanf("%s", str); // %s를 사용하고 배열명을 준다.
	printf("첫 번째 단어 : %s\n", str); // 배열에 입력된 문자열 출력
	scanf("%s", str);
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);
	*/

	/*
	char str[80];

	printf("공백이 포함된 문자열 입력 : ");
	gets(str); // 배열명으로 주고 함수 호출
	printf("입력한 문자열은 %s입니다.\n", str);
	*/

	/**
	char str[80];

	printf("공백이 포함된 문자열 입력 :");
	fgets(str, sizeof(str), stdin); // 문자열 입력
	printf("입력된 문자열은 %s입니다.\n", str); // 문자열 출력
	*/

	/*
	int age; // 나이를 저장할 변수
	char name[20]; // 이름을 저장할 배열

	printf("나이 입력 : ");
	scanf("%d", &age); // 나이 입력
	printf("이름 입력 : ");
	gets(name); // 이름 입력
	printf("나이 : %d, 이름 : %s\n", age, name);
	*/

	char str[80] = "apple juice"; // 배열에 문자열 초기화
	char *ps = "banana"; // 포인터에 문자열 연결

	puts(str); // apple juice 출력하고 줄 바꿈
	fputs(ps, stdout); // banana만 출력
	puts("milk"); // banana에 이어 milk 출력

	return 0;
}
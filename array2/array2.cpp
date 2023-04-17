#include <stdio.h>
#include <string.h>

int main(void) {
	char str[80] = "applejam"; // 문자열 초기화

	printf("최초 문자열 : %s\n", str); // 초기화 문자열 출력
	printf("문자열 입력 : ");
	scanf("%s", str); // 새로운 문자열 출력
	printf("입력 후 문자열 : %s\n", str); // 입력된 문자열 출력

	char str2[5];

	str2[0] = 'O';
	str2[1] = 'K';
	printf("%s\n", str2);

	char str3[80] = "cat";
	char str4[80];

	strcpy(str3, "tiger"); // str3 배열에 "tiger" 복사
	strcpy(str4, str3); // str3 배열에 str4 배열의 문자열 복사
	printf("%s, %s\n", str3, str4);

	char str5[80];

	printf("문자열 입력 : "); // 입력 안내 메시지 출력
	gets(str5); // 빈칸을 포함한 문자열 입력
	puts("입력된 문자열 : "); // 문자열 상수 출력
	puts(str5); // 배열에 저장된 문자열 출력

	return 0;
}
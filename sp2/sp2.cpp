#include <stdio.h>
#include <string.h> 

/* char *my_strcpy(char *pd, char *ps); */ // 함수 선언

int main(void) {
	/*
	char str1[80] = "strawberry"; // char 배열에 문자열 초기화
	char str2[80] = "apple"; // char 배열에 문자열 초기화
	char *ps1 = "banana"; // 포인터로 문자열 상수 연결
	char *ps2 = str2; // 포인터로 배열 연결

	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2); // 다른 char 배열의 문자열 복사
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1); // 문자열 상수를 연결한 포인터 사용
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2); // 배열을 연결한 포인터 사용
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana"); // 문자열 상수 사용
	printf("바뀐 문자열 : %s\n", str1);
	*/

	/*
	char str[80] = "strawberry";

	printf("바꾸기 전 문자열 : %s\n", str);
	my_strcpy(str, "apple"); // 문자열 "apple" 복사
	printf("바꾼 후 문자열 : %s\n", str);
	printf("다른 문자열 대입 : %s\n", my_strcpy(str, "kiwi"));
	// 반환값으로 출력
	*/

	/*
	char str[20] = "mango tree"; // 배열 초기화

	strncpy(str, "apple-pie", 5); // "apple-pie"에서 다섯 문자만 복사
	printf("%s\n", str); // 복사받은 문자열 출력
	*/

	/**
	char str1[80], str2[80]; // 두 문자열을 입력할 배열
	char *resp; // 문자열이 긴 배열을 선택할 포인터

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2); // 2개의 문자열 입력
	if (strlen(str1) > strlen(str2)) { 
		// 배열에 입력된 문자열의 길이 비교
		resp = str1; // 첫 번째 배열이 긴 경우 선택
	} else {
		resp = str2; // 두 번째 배열이 긴 경우 선택
		printf("이름이 긴 과일은 : %s\n", resp); 
		// 선택된 배열의 문자열 출력
	}
	*/

	/*
	char str[80] = "straw"; // 문자열 초기화

	strcat(str, "berry"); // str 배열에 문자열 붙이기
	printf("%s\n", str);
	strncat(str, "piece", 3); // str 배열에 3개의 문자 붙이기
	printf("%s\n", str);
	*/

	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");
	
	if (strcmp(str1, str2) > 0) { 
		// str1이 str2보다 크면(사전에 나중에 나오면)
		printf("%s\n", str1); // str1 출력
	} else {
		printf("%s\n", str2); // 그렇지 않으면 str2 출력
	}

	printf("앞에서 3개의 문자를 비교하면 ");

	if (strncmp(str1, str2, 3) == 0) {
		// 앞에서 3개의 문자가 같으면 0 반환
		printf("같다.\n");
	} else {
		printf("다르다.\n");
	}

	return 0;
}

/*
char *my_strcpy(char *pd, char *ps) { 
	// 복사받을 곳(pd)과 복사할 곳(ps)의 포인터

	char *po = pd; // pd값을 나중에 반환하기 위해 보관

	while (*ps != '\0') {
		// ps가 가리키는 문자가 널문자가 아닌 동안

		*pd = *ps; // ps가 가리키는 문자를 pd가 가리키는 위치에 대입
		pd++; // 복사받을 다음 위치로 포인터 증가
		ps++; // 복사할 다음 문자의 위치로 포인터 증가
	}
	*pd = '\0'; // 복사가 모두 끝난 후 복사받을 곳에 널문자로 마무리

	return po; // 복사가 끝난 저장 공간의 시작 주소 반환

}
*/
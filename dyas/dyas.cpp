#include <stdio.h>
#include <stdlib.h> // malloc, atoi 함수 사용을 위한 헤더 파일
#include <string.h>

/*
void print_str(char **ps); // 동적 할당 영역의 문자열을 출력하는 함수
*/

void print_str(char **); // 문자열 출력 함수 선언

/*
int main(void) {
	char temp[80]; // 임시 char 배열
	char *str[3]; // 동적 할당 영역을 연결할 포인터 배열
	int i; // 반복 제어 변수

	for (i = 0; i < 3; i++) {
		printf("문자열을 입력하세요 : ");
		gets(temp); // 문자열 입력
		str[i] = (char *) malloc(strlen(temp) + 1);
		// 문자열 저장 공간 할당
		strcpy(str[i], temp); // 동적 할당 영역에 문자열 복사
	}

	for (i = 0; i < 3; i++) {
		printf("%s\n", str[i]); // 입력된 문자열 출력
	}

	for (i = 0; i < 3; i++) {
		free(str[i]); // 동적 할당 영역 반환
	}

	char temp[80]; // 임시 char 배열
	char *str[21] = { 0 }; 
	// 문자열을 연결할 포인터 배열, 널포인터로 초기화
	int i = 0; // 반복 제어 변수

	while (i < 20) { // 최대 20개까지 입력
		printf("문자열을 입력하세요 : ");
		gets(temp); // 문자열 입력
		
		if (strcmp(temp, "end") == 0) { // end가 입력되면 반복 종료
			break;
		}

		str[i] = (char *) malloc(strlen(temp) + 1); 
		// 문자열 저장 공간 할당
		strcpy(str[i], temp); // 동적 할당 영역에 문자열 복사
		i++;
	}

	print_str(str); // 입력한 문자열 출력

	for (i = 0; str[i] != NULL; i++) { // str에 연결된 문자열이 없을 때까지
		free(str[i]); // 동적 할당 영역 반환
	}

	return 0;
}
*/

/*
int main(int argc, char **argv) { // 명령행 인수를 받을 매개변수
	int i;

	for (i = 0; i < argc; i++) { // 인수 개수 만큼 반복
		printf("%s\n", argv[i]); // 인수로 받은 문자열 출력
	}

	return 0;
}
*/

int main(int argc, char ** argv) {
	char temp[80]; // 문자열 입력을 위한 임시 char 배열
	char **str; // 포인터 배열로 사용할 동적 할당 영역 연결
	int max; // 최대 입력 문자열 수를 저장
	int i;

	max = atoi(argv[1]); // 두 번째 명령행 인수를 정수로 변환
	str = (char **) malloc((max + 1) * sizeof(char *)); 
	// 포인터 배열의 동적 할당
	i = 0;

	while (1) {
		printf("문자열을 입력하세요 : ");
		gets(temp); // 문자열 입력
		if (temp[0] == '\0') { // 엔터만 입력하면 반복 종료
			break;
		}

		str[i] = (char *) malloc(strlen(temp) + 1); 
		// 문자열 저장 영역 동적 할당
		strcpy(str[i], temp); // 문자열 복사
		i++;

		if (i == max) { // 입력된 문자열의 수를 검사
			printf("문자열 입력이 최댓값을 모두 채웠습니다.\n");
			break;
		}
	}

	str[i] = 0; // 입력이 끝난 후 널포인터로 마감
	print_str(str); // 입력된 문자열 출력

	i = 0;

	while (str[i] != 0) {
		free(str[i]); // 문자열을 저장한 동적 할당 영역 반환
		i++;
	}

	free(str); // 포인터 배열을 위해 동적 할당한 영역 반환

	return 0;

}

/*
void print_str(char **ps) { // 2중 포인터 선언
	while (*ps != NULL) { // 포인터 배열의 값이 널포인터가 아닌 동안 반복
		printf("%s\n", *ps); // ps가 가리키는 곳은 포인터 배열의 요소
		ps++; // ps가 다음 배열 요소를 가리킨다.
	}
}
*/

void print_str(char **ps) { // 2중 포인터 ps는 포인터 배열처럼 사용
	while (*ps != 0) { // ps 배열 요소의 값이 널포인터가 아닌 동안
		printf("%s\n", *ps); // ps 배열 요소가 연결하고 있는 문자열 출력
		ps++; // 다음 요소로 이동
	}
}
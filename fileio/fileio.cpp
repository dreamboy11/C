#include <stdio.h>
#include <string.h>

int main(void) {
	/*
	FILE *fp; // 파일 포인터

	fp = fopen("a.txt", "r"); // a.txt 파일을 읽기 전용으로 개방

	if (fp == NULL) { // fp가 널포인터면 파일 개방 실패
		printf("파일이 열리지 않았습니다.\n"); // 안내 메시지 출력
		return 1; // 프로그램 종료
	}

	printf("파일이 열렸습니다.\n");
	
	fclose(fp); // 파일 닫기
	*/

	/*
	FILE *fp; // 파일 포인터 선언
	int ch; // 입력한 문자를 저장할 변수

	fp = fopen("a.txt", "r"); // 읽기 전용으로 파일 개방

	if (fp == NULL) { // 파일이 개방되었는지 확인
		printf("파일이 열리지 않았습니다.\n");
		return 1;
	}

	while (1) {
		ch = fgetc(fp); // 개방한 파일에서 문자 입력

		if (ch == EOF) { // 함수의 반환값이 EOF면 입력 종료
			break;
		}
		putchar(ch); // 입력한 문자를 화면에 출력
	}
	fclose(fp); // 파일 닫음
	*/

	/*
	FILE *fp; // 파일 포인터 선언

	char str[] = "banana"; // 출력할 문자열

	int i; // 반복 제어 변수

	fp = fopen("b.txt", "w"); // 쓰기 전용으로 개방

	if (fp == NULL) { // 파일 개방 확인
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	i = 0; // 문자 배열의 첫 번째 문자부터 출력

	while (str[i] != '\0') { // 널문자가 아니면
		fputc(str[i], fp); // 문자를 파일에 출력
		i++; // 다음 문자로 이동
	}
	fputc('\n', fp);

	fclose(fp); // 파일 닫음
	*/

	/*
	int ch; // 입력한 문자를 저장할 변수

	while (1) {
		ch = getchar(); // 키보드에서 문자 입력

		if (ch == EOF) { // Ctrl + Z로 입력 종료
			break;
		}
		putchar(ch); // 화면에 문자 출력
	}
	*/

	/*
	int ch; // 입력한 문자를 저장할 변수

	while (1) {
		ch = fgetc(stdin); // 키보드에서 문자 입력

		if (ch == EOF) { // Ctrl + Z로 입력 종료
			break;
		}
		fputc(ch, stdout); // 화면에 문자 출력
	}
	*/

	/*
	FILE *fp;
	
	int ary[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };

	int i, res;

	fp = fopen("a.txt", "wb"); // 바이너리 파일로 개방

	for (i = 0; i < 10; i++) {
		fputc(ary[i], fp); 
		// 배열 요소의 각 값에 해당하는 아스키문자 출력
	}
	fclose(fp); // 파일 닫음

	fp = fopen("a.txt", "rt"); // 같은 파일을 텍스트 파일로 개방

	while (1) {
		res = fgetc(fp); // 파일에서 한 문자 입력

		if (res == EOF) {
			break;
		}
		printf("%4d", res); // 입력한 문자의 아스키 코드값 출력
	}
	fclose(fp); // 파일 닫음
	*/

	FILE *fp;

	char str[20];

	fp = fopen("a.txt", "a+"); // 읽기 가능한 추가 모드로 개방

	if (fp == NULL) {
		printf("파일을 만들지 못했습니다.\n");
		return 1;
	}

	while (1) {
		printf("과일 이름 : ");

		scanf("%s", str); // 키보드로 과일 이름 입력

		if (strcmp(str, "end") == 0) { // end 입력 시 종료
			break;
		}
		else if (strcmp(str, "list") == 0) { 
			// list를 입력하면 파일의 내용 확인
			fseek(fp, 0, SEEK_SET); 
			// 버퍼의 위치 지시자를 맨 처음으로 이동

			while (1) {
				fgets(str, sizeof(str), fp); // 과일 이름을 읽는다.

				if (feof(fp)) { // 과일의 내용을 모두 읽으면 종료
					break;
				}
				printf("%s", str); // 읽은 과일 이름을 화면 출력
			}
		}
		else {
			fprintf(fp, "%s\n", str); // 입력한 과일 이름을 파일에 출력
		}
	}
	fclose(fp);

	return 0;
}
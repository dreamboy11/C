#include <stdio.h>

/*
void my_gets(char *str, int size);
*/

int main(void) {
	/*
	char ch;
	int i;

	for (i = 0; i < 3; i++) { // 세 번 반복
		scanf("%c", &ch); // 문자 입력
		printf("%c", ch); // 입력된 문자 출력
	}
	*/

	/*
	int res; // scanf 함수의 반환값을 저장할 변수
	char ch; // 문자를 입력할 변수

	while (1) {
		res = scanf("%c", &ch); // 문자 입력, Ctrl+Z를 누르면 -1 반환
		if (res == -1) { // 반환값이 -1이면 반복 종료
			break;
		}
		printf("%d ", ch); // 입력된 문자의 아스키 코드값 출력
	}
	*/

	/*
	char str[7]; // 문자열을 저장할 배열

	my_gets(str, sizeof(str)); // 한 줄의 문자열을 입력하는 함수
	printf("입력한 문자열 : %s\n", str); // 입력한 문자열 출력
	*/

	int num, grade; // 학번과 학점을 저장할 변수

	printf("학번 입력 : ");
	scanf("%d", &num); // 학번 입력
	fflush(stdin); // 버퍼에 남아 있는 개행문자 제거
	printf("학점 입력 : ");
	grade = getchar(); // 학점 입력
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}

/*
void my_gets(char *str, int size) { // str은 char 배열, size는 배열의 크기
	char ch; // getchar 함수의 반환값을 저장할 변수
	int i = 0; // str 배열의 첨자

	ch = getchar(); // 첫 번째 문자 입력
	while ((ch != '\n') && (i < size - 1)) { // 배열의 크기만큼 입력
		str[i] = ch; // 입력한 문자를 배열에 저장
		i++; // 첨자 증가
		ch = getchar(); // 새로운 문자 입력
	}
	str[i] = '\0'; // 입력된 문자열의 끝에 널문자를 저장
}
*/
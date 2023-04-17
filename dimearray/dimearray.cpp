#include <stdio.h>

int main(void) {
	/*
	int score[3][4]; // 3명의 네 과목 점수를 저장할 2차원 배열 선언
	int tot; // 총점
	double avg; // 평균
	int i, j; // 반복 제어 변수

	for (i = 0; i < 3; i++) { // 학생 수만큼 반복
		printf("네 과목의 점수 입력 : "); // 입력 안내 메시지
		for (j = 0; j < 4; j++) { // 과목 수만큼 반복
			scanf("%d", &score[i][j]); // 점수 입력
		}
	}

	for (i = 0; i < 3; i++) { // 학생 수만큼 반복
		tot = 0; // 학생이 바뀔 때마다 새로 0으로 초기화
		for (j = 0; j < 4; j++) { // 과목 수만큼 반복
			tot += score[i][j]; // 학생별로 총점 누적
		}

		avg = tot / 4.0; // 평균 계산
		printf("총점 : %d, 평균 : %.2lf\n", tot, avg); 
		// 총점, 평균 출력
	}
	*/

	/*
	int num1[3][4] = 
	{ { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	int num2[3][4] = { { 1 }, { 5, 6 }, { 9, 10, 11 } };
	int num3[][4] = { { 1 }, { 2, 3 }, { 4, 5, 6 } };
	int num4[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int num5[3][4] = { 1, 2, 3, 4, 5, 6 };
	int num6[][4] = { 1, 2, 3, 4, 5, 6 };
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", num1[i][j]); // 배열 요소 출력
		}
		printf("\n"); // 한 행을 출력한 후에 줄 바꿈
	}
	*/

	/*
	char animal[5][20]; // 2차원 char 배열 선언
	int i; // 반복 제어 변수
	int count; // 행의 수를 저장할 변수

	count = sizeof(animal) / sizeof(animal[0]); // 행의 수 계산
	
	for (i = 0; i < count; i++) { // 행의 수만큼 반복
		scanf("%s", animal[i]); // 문자열 입력
	}

	for (i = 0; i < count; i++) {
		printf("%s, \n", animal[i]); // 입력된 문자열 출력
	}
	*/

	/*
	char animal1[5][10] = { // 문자 상수로 하나씩 초기화
		{ 'c', 'a', 't', '\0' },
		{ 'h', 'o', 'r', 's', 'e', '\0' },
		{ 'd', 'o', 'g', '\0' },
		{ 't', 'i', 'g', 'e', 'r', '\0' },
		{ 'e', 'l', 'e', 'p', 'h', 'a', 'n', 't', '\0' }
	};

	char animal2[][10] =
	{ "cat", "horse", "dog", "tiger", "elephant" };

	int i;

	for (i = 0; i < 5; i++) {
		printf("%s, ", animal1[i]);
	}
	printf("\n");

	for (i = 0; i < 5; i++) {
		printf("%s, \n", animal2[i]);
	}
	*/

	int s[2][3][4] = { // 두 개 반 세 명의 네 과목 점수 저장
		{ { 72, 80, 95, 60 }, { 68, 98, 83, 90 }, { 75, 72, 84, 90 } },
		{ { 66, 85, 90, 88 }, { 95, 92, 88, 95 }, { 43, 72, 56, 75 } }
	};

	int i, j, k; // 반복 제어 변수

	for (i = 0; i < 2; i++) { // 반 수만큼 반복
		printf("%d반 점수...\n", i + 1); // 반이 바뀔 때마다 출력

		for (j = 0; j < 3; j++) { // 학생 수만큼 반복
			for (k = 0; k < 4; k++) { // 과목 수만큼 반복
				printf("%5d", s[i][j][k]); // 점수 출력
			}
			printf("\n"); // 한 학생의 점수를 출력하고 줄 바꿈
		}
		printf("\n"); // 한 반의 점수를 출력하고 줄 바꿈
	}

	return 0;
}
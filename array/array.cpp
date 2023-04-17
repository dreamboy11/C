#include <stdio.h>

int main(void) {
	int ary[5]; // int형 요소 5개의 배열 선언

	ary[0] = 10; // 첫 번째 배열 요소에 10 대입
	ary[1] = 20; // 두 번째 배열 요소에 20 대입
	ary[2] = ary[0] + ary[1]; // 첫 번째와 두 번째 요소를 더해 세 번째 저장
	scanf("%d", &ary[3]); // 키보드로 네 번째 요소에 입력

	printf("%d\n", ary[2]); // 세 번째 배열 요소 출력
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]); // 마지막 배열 요소는 쓰레기값

	int ary3[5] = { 1, 2, 3, 4, 5 }; // int형 배열 초기화
	int ary4[5] = { 1, 2, 3 }; // 초기값이 적은 경우
	int ary5[] = { 1, 2, 3 }; // 배열 요소 개수가 생략된 경우
	double ary6[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 }; // double형 배열 초기화
	char ary7[5] = { 'a', 'p', 'p', '1', 'e' }; // char형 배열 초기화

	ary3[0] = 10;
	ary3[1] = 20;
	ary3[2] = 30;
	ary3[3] = 40;
	ary3[4] = 50;

	int score[5]; // 다섯 과목의 성적을 입력할 int형 배열 선언
	int i; // 반복 제어 변수
	int tot = 0; // 총점을 누적할 변수
	double avg; // 평균을 저장할 변수
	int cnt; // 배열 요소 수를 저장할 변수

	cnt = sizeof(score) / sizeof(score[0]); // 배열 요소 수 계산

	for (i = 0; i < cnt; i++) { // cnt만큼 반복
		scanf("%d", &score[i]);
	}

	for (i = 0; i < cnt; i++) { // cnt만큼 반복
		tot += score[i];
	}
	avg = tot / double(cnt); // 총합을 cnt로 나누어 평균 계산

	for (i = 0; i < cnt; i++) { // cnt만큼 반복
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}
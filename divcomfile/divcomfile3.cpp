#include <stdio.h>

extern int cnt; // divcomfile 파일의 전역 변수 cnt 공유
int tot = 0; // 전역 변수 선언

int input_data(void) {
	int pos; // 양수 저장

	while (1) {
		printf("양수 입력 : ");
		scanf("%d", &pos); // 양수 입력
		if (pos < 0) { // 음수면 입력 종료
			break;
		}
		cnt++; // 개수 증가
		tot += pos; // 입력값을 전역 변수 tot에 누적
	}
	return tot; // 전역 변수 tot의 값 반환
}
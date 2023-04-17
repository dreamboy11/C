extern int cnt; // divcomfile의 전역 변수 cnt 공유
extern int tot; // divcomfile3의 전역 변수 tot 공유

double average(void) {
	return tot / (double)cnt; // 입력값의 평균 반환
}
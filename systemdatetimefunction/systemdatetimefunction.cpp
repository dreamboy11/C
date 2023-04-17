#include <stdio.h>
#include <stdarg.h>

double my_sum(const char *format, ...); // 가변 인수 함수의 선언

int main(void) {
	/*
	char *day[7] = { "일", "월", "화", "수", "목", "금", "토" };
	time_t res; // time이 반환하는 시간 저장
	struct tm *pt; // localtime이 반환하는 주소 저장

	time(&res); // 초 계산
	pt = localtime(&res); // 초로 날짜와 요일, 시간 계산

	printf("%d년", pt -> tm_year + 1900); // tm의 각 멤버로 날짜와 시간 출력
	printf("%d월", pt -> tm_mon + 1);
	printf("%d일", pt -> tm_mday);
	printf("%s요일", day[pt -> tm_wday]);
	printf("%d:%d:%d\n", pt -> tm_hour, pt -> tm_min, pt -> tm_sec);
	*/

	/*
	int lotto[6]; // 6개의 난수를 저장할 배열
	int num, i, j;

	srand((unsigned int)time(NULL)); // time의 반환값을 srand의 seed 값으로 사용
	i = 0;
	
	while (i < 6) { // 6개의 난수를 구할 때까지 반복
		num = (rand() % 45) + 1; // rand의 난수를 1~45까지의 수로 제한
		for (j = 0; j < i; j++) { // 배열에서 현재 구한 난수까지만 검사
			if (num == lotto[j]) { // 중복되는 수가 있으면 반복 종료
				break;
			}
		}

		if (i == j) { // 같은 수가 없을 때 조건식은 참
			lotto[i] = num; // 새로운 난수를 lotto 배열에 저장
			i++; // 로또 번호 수 증가
		}
	}

	for (i = 0; i < 6; i++) {
		printf("%5d", lotto[i]); // lotto 배열의 값 출력
	}
	*/

	double res;

	res = my_sum("ddff", 1, 2, 3.0, 4.5); // 정수 2개 실수 2개를 가변인수로 전달
	printf("res : %.1lf\n", res);

	return 0;
}

double my_sum(const char *format, ...) { // 고정인수는 문자열, 나머지는 가변인수
	va_list pa; // 가변 인수의 시작 위치를 저장하는 포인터
	double tot = 0;

	va_start(pa, format); // pa가 고정인수 다음 위치를 가리키도록 설정

	while (*format) { // 변환문자를 모두 처리할 동안 반복
		if (*format == 'd') { // 변환문자가 d면
			tot += va_arg(pa, int); // 인수를 정수로 변환
		} else if (*format == 'f') { // 변환문자가 f면
			tot += va_arg(pa, double); // 인수를 실수로 변환
		}
		format++; // 다음 변환문자로 이동
	}
	va_end(pa); // 정리 작업을 위한 매크로

	return tot;
}
#include <stdio.h>
#include <stdlib.h> // malloc, free 함수 사용을 위한 헤더 파일

int main(void) {
	/*
	int *pi; // 동적 할당 영역을 연결할 포인터 선언
	double *pd;

	pi = (int *) malloc(sizeof(int)); // 메모리 동적 할당 후 포인터 연결
	
	if (pi == NULL) { // 동적 할당에 실패하면 NULL 포인터 반환
		printf("#으로 메모리가 부족합니다.\n"); // 예외 상황 페이지 출력
		exit(1); // 프로그램 종료
	}

	pd = (double *) malloc(sizeof(double));

	*pi = 10; // 포인터로 동적 할당 영역 사용
	*pd = 3.4;

	printf("정수형으로 사용 : %d\n", *pi); 
	// 동적 할당 영역에 저장된 값 출력
	printf("실수형으로 사용 : %1f\n", *pd);

	free(pi); // 동적 할당 영역 반환
	free(pd);
	*/

	/*
	int *pi; // 동적 할당 영역을 연결할 포인터
	int i, sum = 0; // 반복 제어 변수와 누적 변수

	pi = (int *) malloc(5 * sizeof(int)); // 저장 공간 20바이트 할당

	if (pi == NULL) {
		printf("메모리가 부족합니다!\n");
		exit(1);
	}

	printf("다섯 명의 나이를 입력하세요 : ");

	for (i = 0; i < 5; i++) { // i는 0부터 4까지 5번 반복
		scanf("%d", &pi[i]); // 배열 요소에 입력
		sum += pi[i]; // 배열 요소의 값 누적
	}

	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0)); 
	// 평균 나이 출력
	
	free(pi);
	*/

	int *pi; // 할당한 저장 공간을 연결할 포인터
	int size = 5; // 한 번에 할당할 저장 공간의 크기, int형 변수 5개씩
	int cnt = 0; // 현재 입력된 양수 개수
	int num; // 양수를 입력할 변수
	int i; // 반복 제어 변수

	pi = (int *) calloc(size, sizeof(int)); // 먼저 5개의 저장 공간 할당

	while(1) {
		printf("양수를 입력하세요 => ");
		scanf("%d", &num); // 데이터 입력
		
		if (num <= 0) { // 0 또는 음수이면 종료
			break;
		}

		if (cnt == size) { // 저장 공간을 모두 사용하면
			size += 5; // 크기를 늘려서 재할당
			pi = (int *) realloc(pi, size * sizeof(int));
		}
		pi[cnt++] = num;
	}

	for (i = 0; i < cnt; i++) {
		printf("%5d\n", pi[i]); // 입력한 데이터 출력
	}
	free(pi); // 동적 할당 저장 공간 반납

	return 0;
}
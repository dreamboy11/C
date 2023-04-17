#include <stdio.h>

int main(void) { 
	int a[5] = { 3, 2, 1, 6, 5 };
	int i, j, temp;
	int min;

	/*
	for (i = 0; i < 4; i++) { // 가장 작은 값을 구하는 과정 반복 횟수
		for (j = i + 1; j < 5; j++) { // 첫 번째 비교 대상은 기준 요소 다음부터 시작
			if (a[i] > a[j]) { // 기준 요소 a[i]와 나머지 요소 a[j] 비교
				temp = a[i]; // 교환 작업
				a[i] = a[j];
				a[j] = temp;
			}
		}
		
		for (i = 0; i < 5; i++) {
			printf("%5d", a[i]);
		}
		*/

	for (i = 0; i < 4; i++) { // 가장 작은 값을 구하는 과정 반복 횟수
		min = i;
		for (j = i + 1; j < 5; j++) { // i가 가장 작은 값의 첨자라고 가정
			if (a[min] > a[j]){ // 가장 작은 값이 a[j]보다 크면
				min = j; // j가 가장 작은 값의 첨자가 된다.
			}
		}
		if (min != i) { // 가장 작은 값의 위치가 바뀌었으면
			temp = a[i]; // 두 값 교환
			a[i] = a[min];
			a[min] = temp;
		}
	}

	for (i = 0; i < 5; i++) {
		printf("%5d", a[i]);
	}

	return 0;
}
#include <stdio.h>
/* #include <string.h> */

int main(void) {
	/*
	FILE *ifp, *ofp; // 파일 포인터 선언
	char str[80]; // 입력한 문자열을 저장할 배열
	char *res; // fgets 함수의 반환값을 저장할 변수

	ifp = fopen("a.txt", "r"); // 입력 파일을 읽기 전용으로 개방
	if (ifp == NULL) { // 개방 여부 확인
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w"); // 출력 파일을 쓰기 전용으로 개방
	if (ofp == NULL) { // 개방 여부 확인
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1) { // 문자열을 입력하고 출력하는 과정 반복
		res = fgets(str, sizeof(str), ifp);
		if (res == NULL) { // 반환값이 널포인터면 반복 종료
			break;
		}
		str[strlen(str) - 1] = '\0'; // 개행문자 제거
		fputs(str, ofp);
		fputs("", ofp);
	}

	fclose(ifp); // 입력 파일 닫기
	fclose(ofp); // 출력 파일 닫기
	*/

	/*
	FILE *ifp, *ofp; // 파일 포인터 선언
	char name[20]; // 이름
	int kor, eng, mat; // 세 과목 점수
	int tot; // 총점
	double avg; // 평균
	int res; // fscanf 함수의 반환값 저장

	ifp = fopen("a.txt", "r"); // 입력 파일을 읽기 전용으로 개방

	if (ifp == NULL) { // 개방 여부 확인
		printf("입력 파일을 열지 못했습니다.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w"); // 출력 파일을 쓰기 전용으로 개방

	if (ofp == NULL) { // 개방 여부 확인
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	while (1) {
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &mat); 
		// 데이터 입력

		if (res == EOF) { // 파일의 데이터를 모두 읽으면 EOF 반환
			break;
		}
		tot = kor + eng + mat; // 총점 계산
		avg = tot / 3.0; // 평균 계산
		fprintf(ofp, "%s%5d%7.1lf\n", name, tot, avg); 
		// 이름, 총점, 평균 출력
	}
	
	fclose(ifp); // 입력 파일 닫기
	fclose(ofp); // 출력 파일 닫기
	*/

	/*
	FILE *fp; // 파일 포인터
	int age; // 나이 저장 변수
	char name[20]; // 이름 저장 배열

	fp = fopen("a.txt", "r"); // 파일 개방

	fscanf(fp, "%d", &age); // 나이 입력
	fgets(name, sizeof(name), fp); // 이름 입력

	printf("나이 : %d,이름:%s", age, name); // 입력 데이터 출력
	fclose(fp); // 파일 닫음
	*/

	FILE *afp, *bfp;
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt"); // 텍스트 모드로 출력 파일 개방
	fprintf(afp, "%d", num); // num의 값을 문자로 변환하여 출력

	bfp = fopen("b.txt", "wb"); // 바이너리 모드로 출력 파일 개방
	fwrite(&num, sizeof(num), 1, bfp); // num의 값을 그대로 파일에 출력

	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb"); // 바이너리 모드로 입력 파일 개방
	fread(&res, sizeof(res), 1, bfp); 
	// 파일의 데이터를 그대로 변수에 입력
	printf("%d", res); // 입력한 데이터 확인

	fclose(bfp);
		
	return 0;
}
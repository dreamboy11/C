#include <stdio.h> // 시스템 헤더 파일의 내용 복사
/* #include "student.h" */ // 사용자 정의 헤더 파일의 내용 복사
/*
#define PI 3.14159 // 상수를 매크로명으로 정의
#define LIMIT 100.0 // 상수를 매크로명으로 정의
#define MSG "passed!" // 문자열을 매크로명으로 정의
#define ERR_PRN printf("범위를 벗어났습니다!\n"); 
// 출력문을 매크로명으로 정의
*/
/*
#define SUM(a, b) ((a)+(b)) // 두 값을 더하는 매크로 함수
#define MUL(a, b) ((a)*(b)) // 두 값을 곱하는 매크로 함수
*/
/*
void func(void);
*/
/*
#define PRINT_EXPR(x) printf(#x " = %d\n",x)
#define NAME_CAT(x, y) (x ## y)
*/
/*
#define VER 7 // 치환할 부분이 있는 매크로명 정의
#define BIT16 // 치환될 부분이 없는 매크로명 정의
*/
#pragma pack(push , 1) // 바이트 얼라인먼트를 1로 바꿈
typedef struct {
	char ch;
	int in;
}Sample1;

#pragma pack(pop) // 바꾸기 전의 바이트 얼라인먼트 적용
typedef struct {
	char ch;
	int in;
}Sample2;

int main(void) {
	/*
	Student a = { 315, "홍길동" }; // 구조체 변수 선언과 초기화
	
	printf("학번 : %d, 이름 : %s\n", a.num, a.name); // 구조체 멤버 출력
	*/

	/*
	double radius, area; // 반지름과 면적 변수

	printf("반지름을 입력하세요 : ");

	scanf("%lf", &radius); // 반지름 입력

	area = PI * radius * radius; // 면적 계산
	
	if (area > LIMIT) {
		ERR_PRN; // 면적이 100을 초과하면 에러 메시지 출력
	}
	else {
		printf("원의 면적 : %.2lf (%s)\n", area, MSG); 
		// 면적과 메시지 출력
	}
	*/

	/*
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b)); // a와 b의 합
	printf("x + y = %d\n", SUM(x, y)); // x와 y의 합
	res = 30 / MUL(2, 5);// 30을 2와 5의 곱으로 나눔
	printf("res : %d\n", res);
	*/

	/*
	printf("컴파일 날짜와 시간 : %s, %s\n\n", __DATE__, __TIME__);
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);

#line 100 "macro.c" // 행 번호를 100부터 시작, 파일명은 macro.c로 표시
	func(); // 여기부터 행 번호는 100으로 시작
	*/

	/*
	int a1, a2;

	NAME_CAT(a, 1) = 10; // (a1) = 10;
	NAME_CAT(a, 2) = 20; // (a2) = 20;
	PRINT_EXPR(a1 + a2); // printf("a1 + a2" " = %d\n", a1 + a2);
	PRINT_EXPR(a2 - a1); // printf("a2 - a1" " = %d\n", a2 - a1);
	*/

	/*
	int max;

#if VER >= 6 // 매크로명 VER이 6 이상이면
	printf("버전 %d입니다.\n", VER); // 이 문장 컴파일
#endif // if의 끝

#ifdef BIT16 // 매크로명 BIT16이 정의되어 있으면
	max = 32767; // 이 문장 컴파일
#else // BIT16이 정의되어 있지 않으면
	max = 2147483647; // 이 문장 컴파일
#endif // ifdef의 끝

	printf("int형 변수의 최댓값 : %d\n", max); // max 출력

	*/

	printf("Sample1 구조체의 크기 : %d바이트\n", sizeof(Sample1));
	printf("Sample2 구조체의 크기 : %d바이트\n", sizeof(Sample2));

	return 0;
}

/*
void func(void) {
	printf("\n");
	printf("파일명 : %s\n", __FILE__);
	printf("함수명 : %s\n", __FUNCTION__);
	printf("행번호 : %d\n", __LINE__);
}
*/

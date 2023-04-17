/* 작성자 : 이한정
   제  목 : 10과 20을 더하는 프로그램 */

#include <stdio.h>

int main(void) {
	10 + 20; // 10과 20을 더한다.

	printf("Be happy"); // 문자열 "Be happy" 출력
	printf("My friend\n"); // 문자열 "My friend" 출력

	printf("12345678901234567890\n"); // 화면에 칸 번호 출력
	printf("Be happy\n"); // "Be happy"를 출력하고 줄을 바꿈
	printf("My\tfriend\n"); // "My"를 출력하고 탭 위치로 이동 후에 "friend" 출력
	printf("Goot\bd\tchance\n"); // t를 d로 바꾸고 탭 위치로 이동 후에 "chance" 출력
	printf("Cow\rW\a\n"); // C를 W로 바꾸고 벨 소리를 낸다.

	printf("%d\n", 10); // %d 위치에 10 출력
	printf("%1f\n", 3.4); // %1f 위치에 3.4를 소수점 이하 6자리까지 출력
	printf("%.1lf\n", 3.45); // 소수점 이하 첫째 자리까지 출력
	printf("%.101f\n", 3.4); // 소수점 이하 10자리까지 출력

	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0; // 프로그램 종료
}
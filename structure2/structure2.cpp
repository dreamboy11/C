#include <stdio.h>

/*
struct score { // 구조체 선언
	int kor; // 국어 점수를 저장할 멤버
	int eng; // 영어 점수
	int mat; // 수학 점수
};
*/

/*
struct address { // 주소록을 만들 구조체 선언
	char name[20]; // 이름을 저장할 멤버
	int age; // 나이를 저장할 멤버
	char tel[20]; // 전화번호를 저장할 멤버
	char addr[80]; // 주소를 저장할 멤버
};
*/

/*
struct list { // 자기 참조 구조체
	int num; // 데이터를 저장할 멤버
	struct list *next; // 구조체 자신을 가리키는 포인터 멤버
};
*/

/*
union student { // 공용체 선언
	int num; // 학번을 저장할 멤버
	double grade; // 학점을 저장할 멤버
};
*/

/*
enum season { // 열거형 선언
	SPRING, SUMMER, FALL, WINTER
};
*/


struct student {
	int num;
	double grade;
};

typedef struct student Student; // Student형으로 재정의

void print_data(Student *ps); // 매개변수는 Student형의 포인터

/* void print_list(struct address *ip); */

int main(void) {
	/*
	struct score yuni = { 90, 80, 70 }; // 구조체 변수 선언과 초기화
	struct score *ps = &yuni; // 구조체 포인터에 주소 저장

	printf("국어 : %d\n", (*ps).kor); // 구조체 포인터로 멤버 접근
	printf("영어 : %d\n", ps -> eng); // -> 연산자 사용
	printf("수학 : %d\n", ps -> mat);
	*/

	/*
	struct address list[5] = { // 요소가 5개인 구조체 배열 선언
		{ "홍길동", 23, "111-1111", "울릉도 독도" },
		{ "이순신", 35, "222-2222", "서울 건천동" },
		{ "장보고", 19, "333-3333", "완도 청해진" },
		{ "유관순", 15, "444-4444", "충남 천안" },
		{ "안중근", 45, "555-5555", "황해도 해주" }
	};
	*/

	/*
	int i;

	for (i = 0; i < 5; i++) { // 배열 요소 수만큼 반복
		printf("%10s%5d%15s%20s\n",  // 각 배열 요소의 멤버 출력
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	*/

	/* print_list(list); */

	/*
	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 }; 
	// 구조체 변수 초기화
	struct list *head = &a, *current; // 헤드 포인터 초기화

	a.next = &b; // a의 포인터 멤버가 b를 가리킴
	b.next = &c; // b의 포인터 멤버가 c를 가리킴

	printf("head -> num : %d\n", head -> num); 
	// head가 가리키는 a의 num 멤버 사용
	printf("head -> next -> num : %d\n", head -> next -> num);
	// head로 b의 num 멤버 사용

	printf("list all : ");
	
	current = head; // 최초 temp 포인터가 a를 가리킴

	while (current != NULL) { 
		// 마지막 구조체 변수까지 출력하면 반복 종료

		printf("%d ", current -> num);
		// temp가 가리키는 구조체 변수의 num 출력
		current = current -> next;
		// temp가 다음 구조체 변수를 가리키도록 함
	}
	printf("\n");
	*/

	/*
	union student s1 = { 315 }; // 공용체 변수의 선언과 초기화

	printf("학번 : %d\n", s1.num); // 학번 멤버 출력

	s1.grade = 4.4; // 학점 멤버에 값 대입

	printf("학점 : %.1lf\n", s1.grade);

	printf("학번 : %d\n", s1.num); // 학번 다시 출력
	*/

	/*
	enum season ss; // 열거형 변수 선언
	char *pc; // 문자열을 저장할 포인터

	ss = SPRING; // 열거 멤버의 값 대입

	switch (ss) { // 열거 멤버 판단
		case SPRING: // 봄이면
			pc = "lnline"; // 인라인 문자열 선택
			break;
		case SUMMER: // 여름이면
			pc = "swimming"; // 수영 문자열 선택
			break;
		case FALL: // 가을이면
			pc = "trip"; // 여행 문자열 선택
			break;
		case WINTER: // 겨울이면
			pc = "skiing"; // 스키 문자열 선택
			break;
	}

	printf("나의 레저 활동 => %s\n", pc); // 선택된 문자열 출력
	*/

	
	Student s1 = { 315, 4.2 }; // Student형의 변수 선언과 초기화

	print_data(&s1); // Student형 변수의 주소 전달

	return 0;
}

/*
void print_list(struct address *ip) { // 매개변수는 구조체 포인터
	int i; // 반복 제어 변수

	for (i = 0; i < 5; i++) { // 배열 요소 수만큼 반복
		printf("%10s%5d%15s%20s\n",
			(ip + i)->name, (ip + i)->age, 
			(ip + i)->tel, (ip + i)->addr);
	}
}
*/


void print_data(Student *ps) {
	printf("학번 : %d\n", ps -> num); // Student 포인터로 멤버 접근
	printf("학점 : %.1lf\n", ps -> grade);
}
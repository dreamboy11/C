#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
struct student { // 구조체 선언
	int num; // int형 멤버
	double grade; // double형 멤버
}; // 세미콜론 사용
*/

/*
struct profile { // 신상명세 구조체 선언
	char name[20]; // 이름을 저장할 배열 멤버
	int age; // 나이
	double height; // 키
	char *intro; // 자기소개를 위한 포인터
};
*/

/*
struct profile { // 신상명세 구조체 선언
	int age; // 나이
	double height; // 키
};
*/

/*
struct student {
	struct profile pf; // profile 구조체를 멤버로 사용
	int id; // 학번을 저장할 멤버
	double grade; // 학점을 저장할 멤버
};
*/

/*
struct student { // 학생 구조체 선언
	int id; // 학번
	char name[20]; // 이름
	double grade; // 학점
};
*/

/*
struct vision { // 로봇의 시력을 저장할 구조체
	double left; // 왼쪽 눈
	double right; // 오른쪽 눈
};
*/

/*
struct vision exchange(struct vision); // 두 시력을 바꾸는 함수
*/

struct children {
	unsigned int son : 2; // 아들 수를 저장할 멤버
	unsigned int daughter : 2; // 딸 수를 저장할 멤버
	unsigned int pet : 3; // 애완동물 수를 저장할 멤버
};

int main(void) {
	/*
	struct student s1; // struct student형의 변수 선언

	s1.num = 2; // s1의 num 멤버에 2 저장
	s1.grade = 2.7; // s1의 grade 멤버에 2.7 저장
	printf("학번 : %d\n", s1.num); // num 멤버 출력
	printf("학점 : %.1lf\n", s1.grade); // grade 멤버 출력
	*/

	/*
	struct profile yuni; // profile 구조체 변수 선언

	strcpy(yuni.name, "서하윤"); // name 배열 멤버에 이름 복사
	yuni.age = 17; // age 멤버에 나이 저장
	yuni.height = 164.5; // height 멤버에 키 저장

	yuni.intro = (char *) malloc(80); 
	// 자기소개를 저장할 공간 동적 할당
	printf("자기 소개 : ");
	gets(yuni.intro); // 할당한 공간에 자기소개 입력

	printf("이름 : %s\n", yuni.name); // 각 멤버의 데이터 출력
	printf("나이 : %d\n", yuni.age);
	printf("키 : %.1lf\n", yuni.height);
	printf("자기소개 : %s\n", yuni.intro);
	
	free(yuni.intro); // 동적 할당 영역 반환
	*/

	/*
	struct student yuni; // student 구조체 변수 선언

	yuni.pf.age = 17; // age 멤버에 나이 저장
	yuni.pf.height = 164.5; // height 멤버에 키 저장
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("나이 : %d\n", yuni.pf.age); // pf 멤버의 age 멤버 출력
	printf("키 : %.1lf\n", yuni.pf.height); // pf 멤버의 height 멤버 출력
	printf("학번 : %d\n", yuni.id); // id 멤버 출력
	printf("학점 : %.1lf\n", yuni.grade); // grade 멤버 출력
	*/

	/*
	struct student s1 = { 315, "홍길동", 2.4 },
		// 구조체 변수 선언과 초기화
		           s2 = { 316, "이순신", 3.7 },
		           s3 = { 317, "세종대왕", 4.4 };

	struct student max; // 최고 학점을 저장할 구조체 변수

	max = s1; // s1을 최고 학점으로 가정
	if (s2.grade > max.grade) { // s2가 더 높으면 max에 대입
		max = s2;
	}
	if (s3.grade > max.grade) { // s3가 더 높으면 max에 대입
		max = s3;
	}

	printf("학번 : %d\n", max.id); // 최고 학점 학생의 학번 출력
	printf("이름 : %s\n", max.name); // 최고 학점 학생의 이름 출력
	printf("학점 : %.1lf\n", max.id); // 최고 학점 학생의 학점 출력
	*/

	/*
	struct vision robot; // 구조체 변수 선언

	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right)); // 시력 입력
	robot = exchange(robot); // 교환 함수 호출
	printf("바뀐 시력 : %.1lf, %.1lf\n", robot.left, robot.right);
	*/

	struct children my = { 1, 2, 3 }; // 비트 필드 구조체 변수 초기화
	int sum;

	printf("struct children의 크기 : %d바이트\n", sizeof(my));
	sum = my.son + my.daughter + my.pet; // 멤버의 합 계산
	printf("자식 수 : %d\n", sum);

	return 0;
}

/*
struct vision exchange(struct vision robot) { // 구조체를 반환하는 함수
	double temp; // 교환을 위한 임시 변수

	temp = robot.left; // 좌우 시력 교환
	robot.left = robot.right;
	robot.right = temp;

	return robot; // 구조체 변수 반환
}
*/
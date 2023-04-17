#include <stdio.h>

/*
struct score { // ����ü ����
	int kor; // ���� ������ ������ ���
	int eng; // ���� ����
	int mat; // ���� ����
};
*/

/*
struct address { // �ּҷ��� ���� ����ü ����
	char name[20]; // �̸��� ������ ���
	int age; // ���̸� ������ ���
	char tel[20]; // ��ȭ��ȣ�� ������ ���
	char addr[80]; // �ּҸ� ������ ���
};
*/

/*
struct list { // �ڱ� ���� ����ü
	int num; // �����͸� ������ ���
	struct list *next; // ����ü �ڽ��� ����Ű�� ������ ���
};
*/

/*
union student { // ����ü ����
	int num; // �й��� ������ ���
	double grade; // ������ ������ ���
};
*/

/*
enum season { // ������ ����
	SPRING, SUMMER, FALL, WINTER
};
*/


struct student {
	int num;
	double grade;
};

typedef struct student Student; // Student������ ������

void print_data(Student *ps); // �Ű������� Student���� ������

/* void print_list(struct address *ip); */

int main(void) {
	/*
	struct score yuni = { 90, 80, 70 }; // ����ü ���� ����� �ʱ�ȭ
	struct score *ps = &yuni; // ����ü �����Ϳ� �ּ� ����

	printf("���� : %d\n", (*ps).kor); // ����ü �����ͷ� ��� ����
	printf("���� : %d\n", ps -> eng); // -> ������ ���
	printf("���� : %d\n", ps -> mat);
	*/

	/*
	struct address list[5] = { // ��Ұ� 5���� ����ü �迭 ����
		{ "ȫ�浿", 23, "111-1111", "�︪�� ����" },
		{ "�̼���", 35, "222-2222", "���� ��õ��" },
		{ "�庸��", 19, "333-3333", "�ϵ� û����" },
		{ "������", 15, "444-4444", "�泲 õ��" },
		{ "���߱�", 45, "555-5555", "Ȳ�ص� ����" }
	};
	*/

	/*
	int i;

	for (i = 0; i < 5; i++) { // �迭 ��� ����ŭ �ݺ�
		printf("%10s%5d%15s%20s\n",  // �� �迭 ����� ��� ���
			list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	*/

	/* print_list(list); */

	/*
	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 }; 
	// ����ü ���� �ʱ�ȭ
	struct list *head = &a, *current; // ��� ������ �ʱ�ȭ

	a.next = &b; // a�� ������ ����� b�� ����Ŵ
	b.next = &c; // b�� ������ ����� c�� ����Ŵ

	printf("head -> num : %d\n", head -> num); 
	// head�� ����Ű�� a�� num ��� ���
	printf("head -> next -> num : %d\n", head -> next -> num);
	// head�� b�� num ��� ���

	printf("list all : ");
	
	current = head; // ���� temp �����Ͱ� a�� ����Ŵ

	while (current != NULL) { 
		// ������ ����ü �������� ����ϸ� �ݺ� ����

		printf("%d ", current -> num);
		// temp�� ����Ű�� ����ü ������ num ���
		current = current -> next;
		// temp�� ���� ����ü ������ ����Ű���� ��
	}
	printf("\n");
	*/

	/*
	union student s1 = { 315 }; // ����ü ������ ����� �ʱ�ȭ

	printf("�й� : %d\n", s1.num); // �й� ��� ���

	s1.grade = 4.4; // ���� ����� �� ����

	printf("���� : %.1lf\n", s1.grade);

	printf("�й� : %d\n", s1.num); // �й� �ٽ� ���
	*/

	/*
	enum season ss; // ������ ���� ����
	char *pc; // ���ڿ��� ������ ������

	ss = SPRING; // ���� ����� �� ����

	switch (ss) { // ���� ��� �Ǵ�
		case SPRING: // ���̸�
			pc = "lnline"; // �ζ��� ���ڿ� ����
			break;
		case SUMMER: // �����̸�
			pc = "swimming"; // ���� ���ڿ� ����
			break;
		case FALL: // �����̸�
			pc = "trip"; // ���� ���ڿ� ����
			break;
		case WINTER: // �ܿ��̸�
			pc = "skiing"; // ��Ű ���ڿ� ����
			break;
	}

	printf("���� ���� Ȱ�� => %s\n", pc); // ���õ� ���ڿ� ���
	*/

	
	Student s1 = { 315, 4.2 }; // Student���� ���� ����� �ʱ�ȭ

	print_data(&s1); // Student�� ������ �ּ� ����

	return 0;
}

/*
void print_list(struct address *ip) { // �Ű������� ����ü ������
	int i; // �ݺ� ���� ����

	for (i = 0; i < 5; i++) { // �迭 ��� ����ŭ �ݺ�
		printf("%10s%5d%15s%20s\n",
			(ip + i)->name, (ip + i)->age, 
			(ip + i)->tel, (ip + i)->addr);
	}
}
*/


void print_data(Student *ps) {
	printf("�й� : %d\n", ps -> num); // Student �����ͷ� ��� ����
	printf("���� : %.1lf\n", ps -> grade);
}
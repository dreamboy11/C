#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
struct student { // ����ü ����
	int num; // int�� ���
	double grade; // double�� ���
}; // �����ݷ� ���
*/

/*
struct profile { // �Ż�� ����ü ����
	char name[20]; // �̸��� ������ �迭 ���
	int age; // ����
	double height; // Ű
	char *intro; // �ڱ�Ұ��� ���� ������
};
*/

/*
struct profile { // �Ż�� ����ü ����
	int age; // ����
	double height; // Ű
};
*/

/*
struct student {
	struct profile pf; // profile ����ü�� ����� ���
	int id; // �й��� ������ ���
	double grade; // ������ ������ ���
};
*/

/*
struct student { // �л� ����ü ����
	int id; // �й�
	char name[20]; // �̸�
	double grade; // ����
};
*/

/*
struct vision { // �κ��� �÷��� ������ ����ü
	double left; // ���� ��
	double right; // ������ ��
};
*/

/*
struct vision exchange(struct vision); // �� �÷��� �ٲٴ� �Լ�
*/

struct children {
	unsigned int son : 2; // �Ƶ� ���� ������ ���
	unsigned int daughter : 2; // �� ���� ������ ���
	unsigned int pet : 3; // �ֿϵ��� ���� ������ ���
};

int main(void) {
	/*
	struct student s1; // struct student���� ���� ����

	s1.num = 2; // s1�� num ����� 2 ����
	s1.grade = 2.7; // s1�� grade ����� 2.7 ����
	printf("�й� : %d\n", s1.num); // num ��� ���
	printf("���� : %.1lf\n", s1.grade); // grade ��� ���
	*/

	/*
	struct profile yuni; // profile ����ü ���� ����

	strcpy(yuni.name, "������"); // name �迭 ����� �̸� ����
	yuni.age = 17; // age ����� ���� ����
	yuni.height = 164.5; // height ����� Ű ����

	yuni.intro = (char *) malloc(80); 
	// �ڱ�Ұ��� ������ ���� ���� �Ҵ�
	printf("�ڱ� �Ұ� : ");
	gets(yuni.intro); // �Ҵ��� ������ �ڱ�Ұ� �Է�

	printf("�̸� : %s\n", yuni.name); // �� ����� ������ ���
	printf("���� : %d\n", yuni.age);
	printf("Ű : %.1lf\n", yuni.height);
	printf("�ڱ�Ұ� : %s\n", yuni.intro);
	
	free(yuni.intro); // ���� �Ҵ� ���� ��ȯ
	*/

	/*
	struct student yuni; // student ����ü ���� ����

	yuni.pf.age = 17; // age ����� ���� ����
	yuni.pf.height = 164.5; // height ����� Ű ����
	yuni.id = 315;
	yuni.grade = 4.3;

	printf("���� : %d\n", yuni.pf.age); // pf ����� age ��� ���
	printf("Ű : %.1lf\n", yuni.pf.height); // pf ����� height ��� ���
	printf("�й� : %d\n", yuni.id); // id ��� ���
	printf("���� : %.1lf\n", yuni.grade); // grade ��� ���
	*/

	/*
	struct student s1 = { 315, "ȫ�浿", 2.4 },
		// ����ü ���� ����� �ʱ�ȭ
		           s2 = { 316, "�̼���", 3.7 },
		           s3 = { 317, "�������", 4.4 };

	struct student max; // �ְ� ������ ������ ����ü ����

	max = s1; // s1�� �ְ� �������� ����
	if (s2.grade > max.grade) { // s2�� �� ������ max�� ����
		max = s2;
	}
	if (s3.grade > max.grade) { // s3�� �� ������ max�� ����
		max = s3;
	}

	printf("�й� : %d\n", max.id); // �ְ� ���� �л��� �й� ���
	printf("�̸� : %s\n", max.name); // �ְ� ���� �л��� �̸� ���
	printf("���� : %.1lf\n", max.id); // �ְ� ���� �л��� ���� ���
	*/

	/*
	struct vision robot; // ����ü ���� ����

	printf("�÷� �Է� : ");
	scanf("%lf%lf", &(robot.left), &(robot.right)); // �÷� �Է�
	robot = exchange(robot); // ��ȯ �Լ� ȣ��
	printf("�ٲ� �÷� : %.1lf, %.1lf\n", robot.left, robot.right);
	*/

	struct children my = { 1, 2, 3 }; // ��Ʈ �ʵ� ����ü ���� �ʱ�ȭ
	int sum;

	printf("struct children�� ũ�� : %d����Ʈ\n", sizeof(my));
	sum = my.son + my.daughter + my.pet; // ����� �� ���
	printf("�ڽ� �� : %d\n", sum);

	return 0;
}

/*
struct vision exchange(struct vision robot) { // ����ü�� ��ȯ�ϴ� �Լ�
	double temp; // ��ȯ�� ���� �ӽ� ����

	temp = robot.left; // �¿� �÷� ��ȯ
	robot.left = robot.right;
	robot.right = temp;

	return robot; // ����ü ���� ��ȯ
}
*/
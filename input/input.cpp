#include <stdio.h>

int main(void) {
	// int a;

	// scanf("%d", &a); // ���⼭ ���� a�� �� �Է�
	// printf("�Էµ� �� : %d\n", a); // �Է��� �� ���

	// short b;

	// scanf("%hd", &b); // ���⼭ ���� b�� �� �Է�
	// printf("�Էµ� �� : %hd\n", b); // �Է��� �� ���

	// long c;

	// scanf("%ld", &c); // ���⼭ ���� c�� �� �Է�
	// printf("�Էµ� �� : %ld\n", c); // �Է��� �� ���

	// long long d;

	// scanf("%lld", &d); // ���⼭ ���� d�� �� �Է�
	// printf("�Էµ� �� : %lld\n", d); // �Է��� �� ���

	// char e;

	// scanf("%c", &e); // ���⼭ ���� e�� �� �Է�
	// printf("�Էµ� �� : %c\n", e); // �Է��� �� ���

	// float f;

	// scanf("%lf", &f); // ���⼭ ���� f�� �� �Է�
	// printf("�Էµ� �� : %lf\n", f); // �Է��� �� ���

	/*
	int age;
	double height;

	printf("���̿� Ű�� �Է��ϼ��� : "); // �Է� �ȳ� �޽��� ���
	scanf("%d%lf", &age, &height); // ���̿� Ű�� �Բ� �Է�
	printf("���̴� %d��, Ű�� %.1lfcm�Դϴ�\n", age, height); // �Է°� ���
	*/

	char grade; // ������ �Է��� ����
	char name[20]; // �̸��� �Է��� �迭

	printf("���� �Է� : ");
	scanf("%c", &grade); // grade ������ ���� ���� �Է�
	printf("�̸� �Է� : ");
	scanf("%s", name); // name �迭�� �̸� ���ڿ� �Է�, &�� ������� ����
	printf("%s�� ������ %c�Դϴ�.\n", name, grade);



	return 0;
}
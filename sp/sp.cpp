#include <stdio.h>

int main(void) {
	printf("�ּҰ� : %p\n", "mango"); // �ּҰ� ���
	printf("ù ��° ���� : %c\n", *"mango"); // �������� ����
	printf("�� ��° ���� : %c\n", *("mango" + 1)); // ������ �����
	printf("�� ��° ���� : %c\n", "mango"[2]); // �迭 ǥ����

	char *dessert = "apple"; // �����Ϳ� ���ڿ� �ʱ�ȭ

	printf("���� �Ľ��� %s�Դϴ�.\n", dessert); // ���ڿ� ���
	dessert = "banana"; // ���ο� ���ڿ� ����
	printf("���� �Ľ��� %s�Դϴ�.\n", dessert); // �ٲ� ���ڿ� ���

	/*
	char str[80];

	printf("���ڿ� �Է� : ");
	scanf("%s", str); // %s�� ����ϰ� �迭���� �ش�.
	printf("ù ��° �ܾ� : %s\n", str); // �迭�� �Էµ� ���ڿ� ���
	scanf("%s", str);
	printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);
	*/

	/*
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� : ");
	gets(str); // �迭������ �ְ� �Լ� ȣ��
	printf("�Է��� ���ڿ��� %s�Դϴ�.\n", str);
	*/

	/**
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է� :");
	fgets(str, sizeof(str), stdin); // ���ڿ� �Է�
	printf("�Էµ� ���ڿ��� %s�Դϴ�.\n", str); // ���ڿ� ���
	*/

	/*
	int age; // ���̸� ������ ����
	char name[20]; // �̸��� ������ �迭

	printf("���� �Է� : ");
	scanf("%d", &age); // ���� �Է�
	printf("�̸� �Է� : ");
	gets(name); // �̸� �Է�
	printf("���� : %d, �̸� : %s\n", age, name);
	*/

	char str[80] = "apple juice"; // �迭�� ���ڿ� �ʱ�ȭ
	char *ps = "banana"; // �����Ϳ� ���ڿ� ����

	puts(str); // apple juice ����ϰ� �� �ٲ�
	fputs(ps, stdout); // banana�� ���
	puts("milk"); // banana�� �̾� milk ���

	return 0;
}
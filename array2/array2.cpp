#include <stdio.h>
#include <string.h>

int main(void) {
	char str[80] = "applejam"; // ���ڿ� �ʱ�ȭ

	printf("���� ���ڿ� : %s\n", str); // �ʱ�ȭ ���ڿ� ���
	printf("���ڿ� �Է� : ");
	scanf("%s", str); // ���ο� ���ڿ� ���
	printf("�Է� �� ���ڿ� : %s\n", str); // �Էµ� ���ڿ� ���

	char str2[5];

	str2[0] = 'O';
	str2[1] = 'K';
	printf("%s\n", str2);

	char str3[80] = "cat";
	char str4[80];

	strcpy(str3, "tiger"); // str3 �迭�� "tiger" ����
	strcpy(str4, str3); // str3 �迭�� str4 �迭�� ���ڿ� ����
	printf("%s, %s\n", str3, str4);

	char str5[80];

	printf("���ڿ� �Է� : "); // �Է� �ȳ� �޽��� ���
	gets(str5); // ��ĭ�� ������ ���ڿ� �Է�
	puts("�Էµ� ���ڿ� : "); // ���ڿ� ��� ���
	puts(str5); // �迭�� ����� ���ڿ� ���

	return 0;
}
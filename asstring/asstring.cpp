#include <stdio.h>

int main(void) {
	int ch; // int�� ����

	printf("���� a�� �ƽ�Ű �ڵ尪 : %d\n", 'a');
	printf("�ƽ�Ű �ڵ尪�� 97�� ���� : %c\n", 97);
	printf("���� ����� ũ�� : %d����Ʈ\n", sizeof('a'));

	ch = 'a'; // ���ڸ� int�� ������ ����
	ch++; // �ƽ�Ű �ڵ尪 1 ����
	printf("���� %c�� �ƽ�Ű �ڵ尪 : %d\n", ch, ch);

	/*
	char small, cap = 'G'; // char�� ���� ����� �ʱ�ȭ

	if ((cap >= 'A') && (cap <= 'Z')) { // �빮�� �������
		small = cap + ('a' - 'A'); // ��,�ҹ����� ���̸� ���� �ҹ��ڷ� ��ȯ
	}

	printf("�빮�� : %c %c", cap, '\n'); // '\n'�� %c�� ����ϸ� ���� �ٲ��.
	printf("�ҹ��� : %c %c", small, '\n');

	char ch1, ch2;

	scanf("%c%c", &ch1, &ch2); // �� ���� ���� ���� �Է�
	printf("[%c%c]", ch1, ch2); // �Էµ� ���� ���
	*/

	int ch3; // �Է� ���ڸ� ������ ����

	ch3 = getchar(); // �Լ��� ��ȯ�ϴ� ���ڸ� �ٷ� ����
	printf("�Է��� ���� : ");
	putchar(ch3); // �Է��� ���� ���
	putchar('\n'); // ���๮�� ���

	return 0;
}
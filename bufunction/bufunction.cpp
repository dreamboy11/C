#include <stdio.h>

/*
void my_gets(char *str, int size);
*/

int main(void) {
	/*
	char ch;
	int i;

	for (i = 0; i < 3; i++) { // �� �� �ݺ�
		scanf("%c", &ch); // ���� �Է�
		printf("%c", ch); // �Էµ� ���� ���
	}
	*/

	/*
	int res; // scanf �Լ��� ��ȯ���� ������ ����
	char ch; // ���ڸ� �Է��� ����

	while (1) {
		res = scanf("%c", &ch); // ���� �Է�, Ctrl+Z�� ������ -1 ��ȯ
		if (res == -1) { // ��ȯ���� -1�̸� �ݺ� ����
			break;
		}
		printf("%d ", ch); // �Էµ� ������ �ƽ�Ű �ڵ尪 ���
	}
	*/

	/*
	char str[7]; // ���ڿ��� ������ �迭

	my_gets(str, sizeof(str)); // �� ���� ���ڿ��� �Է��ϴ� �Լ�
	printf("�Է��� ���ڿ� : %s\n", str); // �Է��� ���ڿ� ���
	*/

	int num, grade; // �й��� ������ ������ ����

	printf("�й� �Է� : ");
	scanf("%d", &num); // �й� �Է�
	fflush(stdin); // ���ۿ� ���� �ִ� ���๮�� ����
	printf("���� �Է� : ");
	grade = getchar(); // ���� �Է�
	printf("�й� : %d, ���� : %c", num, grade);

	return 0;
}

/*
void my_gets(char *str, int size) { // str�� char �迭, size�� �迭�� ũ��
	char ch; // getchar �Լ��� ��ȯ���� ������ ����
	int i = 0; // str �迭�� ÷��

	ch = getchar(); // ù ��° ���� �Է�
	while ((ch != '\n') && (i < size - 1)) { // �迭�� ũ�⸸ŭ �Է�
		str[i] = ch; // �Է��� ���ڸ� �迭�� ����
		i++; // ÷�� ����
		ch = getchar(); // ���ο� ���� �Է�
	}
	str[i] = '\0'; // �Էµ� ���ڿ��� ���� �ι��ڸ� ����
}
*/
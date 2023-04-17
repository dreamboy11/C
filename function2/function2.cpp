#include <stdio.h>

int get_pos(void); // �Լ� ����

void print_char(char ch, int cnt); // �Լ� ����

void print_line(void); // �Լ� ����

void fruit(int n); // �Լ� ����

int main(void) {
	int res;

	res = get_pos(); // �Լ� ȣ��, ��ȯ���� res�� ����
	printf("��ȯ��: %d\n", res); // ��ȯ�� ���

	print_char('@', 5); // ���ڿ� ���ڸ� �ְ� �Լ� ȣ��

	print_line(); // �Լ� ȣ��
	printf("�й�  �̸�  ����  ����\n");
	print_line(); // �Լ� ȣ��

	fruit(1); // ó�� ȣ���ϹǷ� 1�� �μ��� ��

	return 0;
}

int get_pos(void) { // �Ű������� ���� ��ȯ���� ����
	int pos; // Ű���� �Է°��� ������ ����

	printf("��� �Է� : "); // �Է� �ȳ� �޽���
	scanf("%d", &pos); // Ű���� �Է�

	return pos; // �Է��� �� ��ȯ
}

void print_char(char ch, int cnt) { // �Ű������� ������ ��ȯ���� ����
	int i;

	for (i = 0; i < cnt; i++) { // i�� 0���� cnt-1���� ���� �� cnt�� �ݺ�
		printf("%c", ch); // �Ű����� ch�� ���� ���� ���
	}
}

void print_line(void) {
	int i;

	for (i = 0; i < 50; i++) { // 50�� �ݺ��Ͽ� '-' ���
		printf("-");
	}
	printf("\n");
}

void fruit(int n) { // ȣ�� Ƚ���� �Ű������� ����
	printf("apple\n");
	if (n == 3) { // ȣ�� Ƚ���� 3�̸� ��ȯ�ϰ� ����
		return;
	}
	fruit(n + 1); // ��ȣ�� �� �� ȣ�� Ƚ���� 1 ����
	printf("jam\n");
}
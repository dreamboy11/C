#include <stdio.h>

/* void add_ten(int a); // �Լ� ���� */

/* void add_ten(int *p); // �Ű������� ������ ���� */

int *sum(int a, int b); // int�� ������ �ּҸ� ��ȯ�ϴ� �Լ� ����

int main(void) {
	/*
	int a = 10;

	add_ten(a); // a���� �����Ͽ� ����
	printf("a : %d\n", a);
	*/

	/*
	int a = 10;

	add_ten(&a); // a�� �ּҸ� �μ��� �ش�.
	printf("a : %d\n", a); // ������ a�� ���
	*/

	int *p; // ��ȯ���� ������ ������

	p = sum(10, 20); // ��ȯ�� �ּҴ� p�� ����
	printf("�� ������ �� : %d\n", *p); // p�� ����Ű�� ������ ���

	return 0;
}

/*
void add_ten(int a) { // 7���� a�� �ٸ� �������� ���� ���� �Ҵ�
	a = a + 10; // 15���� �Ű����� a�� 10�� ���Ѵ�.
}
*/

/*
void add_ten(int *p) {
	*p = *p + 10; // ������ p�� ����Ű�� ������ �� 10 ����
}
*/

int *sum(int a, int b) { // int�� ������ �ּҸ� ��ȯ�ϴ� �Լ�
	static int res; // ���� ���� ����

	res = a + b; // �� ������ ���� res�� ����

	return &res; // ���� ���� ������ �ּ� ��ȯ
}
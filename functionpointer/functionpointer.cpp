#include <stdio.h>

/* int sum(int, int); // �Լ� ���� */

/*
void func(int (*fp)(int, int)); // �Լ� �����͸� �Ű������� ���� �Լ�
int sum(int a, int b); // �� ������ ���ϴ� �Լ�
int mul(int a, int b); // �� ������ ���ϴ� �Լ�
int max(int a, int b); // �� ���� �߿� ū ���� ���ϴ� �Լ�
*/

int main(void) {
	/*
	int(*fp)(int, int); // �Լ� ������ ����
	int res; // ��ȯ���� ������ ����

	fp = sum; // �Լ����� �Լ� �����Ϳ� ����
	res = fp(10, 20); // �Լ� �����ͷ� �Լ� ȣ��
	printf("result : %d\n", res); // ��ȯ�� ���
	*/

	/*
	int sel; // ���õ� �޴� ��ȣ�� ������ ����

	printf("1. �� ������ ��\n"); // �޴� ���
	printf("2. �� ������ ��\n");
	printf("3. �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� �۾��� �����ϼ��� : ");

	scanf("%d", &sel); // �޴� ��ȣ �Է�

	switch (sel) {
		case 1: func(sum); // 1�̸� func�� ���� ��� �߰�
		break;
		case 2: func(mul); // 2�̸� func�� ���� ��� �߰�
		break;
		case 3: func(max); // 3�̸� func�� ū �� ���ϴ� ��� �߰�
	    break;
	}
	*/

	int a = 10; // int�� ����
	double b = 3.5; // double�� ����
	void *vp; // void ������

	vp = &a; // int�� ������ �ּ� ����
	printf("a : %d\n", * (int *)vp);

	vp = &b; // double�� ������ �ּ� ����
	printf("b : %.1lf\n", * (double *)vp);

	return 0;
}

/*
int sum(int a, int b) {
	return (a + b);
}
*/

/*
void func(int (*fp)(int, int)) {
	int a, b; // �� ������ ������ ����
	int res; // �Լ��� ��ȯ���� ������ ����

	printf("�� �������� �Է��ϼ��� : ");
	scanf("%d%d", &a, &b); // �� ���� �Է�
	res = fp(a, b); // �Լ� �����ͷ� ����Ű�� �Լ��� ȣ��
	printf("������� : %d\n", res); // ��ȯ�� ���
}

int sum(int a, int b) { // ���� �Լ�
	return (a + b);
}

int mul(int a, int b) { // ���� �Լ�
	return (a * b);
}

int max(int a, int b) { // ū ���� ���ϴ� �Լ�
	if (a > b) {
		return a;
	} else {
		return b;
	}
}
*/
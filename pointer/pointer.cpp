#include <stdio.h>

int main(void) {
	int a; // int�� ���� ����
	double b; // double�� ���� ����
	char c; // char�� ���� ����

	printf("int�� ������ �ּ� : %u\n", &a); // �ּ� �����ڷ� �ּ� ���
	printf("double�� ������ �ּ� : %u\n", &b);
	printf("char�� ������ �ּ� : %u\n", &c);

	int d; // �Ϲ� ���� ����
	int *pd; // ������ ����

	pd = &d; // �����Ϳ� d�� �ּ� ����
	*pd = 10; // �����ͷ� ���� d�� 10 ����

	printf("�����ͷ� d�� ��� : %d\n", *pd);
	printf("���������� d�� ��� : %u\n", d); // ���� d�� ���

	int aa = 10, bb = 15, tot; // ���� ����� �ʱ�ȭ
	double avg; // ����� ������ ����
	int *paa, *pbb; // ������ ���� ����
	int *pt = &tot; // ������ ����� �ʱ�ȭ
	double *pg = &avg; // double�� ������ ����� �ʱ�ȭ

	paa = &aa; // ������ paa�� ���� aa�� �ּ� ����
	pbb = &bb; // ������ pbb�� ���� bb�� �ּ� ����

	*pt = *paa + *pbb; // aa���� bb���� ���� tot�� ����
	*pg = *pt / 2.0; // tot���� 2�� ���� ���� avg�� ����

	printf("�� ������ �� : %d, %d\n", *paa, *pbb); // aa���� bb�� ���
	printf("�� ������ �� : %d\n", *pt); // tot�� ���
	printf("�� ������ ��� : %.1lf\n", *pg); // avg�� ���

	int cc = 10, dd = 20;
	const int *pc = &cc; // ������ pc�� ���� cc�� ����Ų��.

	printf("���� cc�� �� : %d\n", *pc); // �����͸� ���� �����Ͽ� cc ���
	pc = &dd; // �����Ͱ� ���� dd�� ����Ű�� �Ѵ�.
	printf("���� dd �� : %d\n", *pc); // �����Ͱ� ���� �����Ͽ� dd�� ���
	pc = &cc; // �����Ͱ� �ٽ� ���� cc�� ����Ų��.
	cc = 20; // cc�� ���� �����Ͽ� ���� �ٲ۴�.
	printf("���� cc �� : %d\n", *pc); // �����ͷ� ���� �����Ͽ� �ٲ� �� ���

	return 0;
}
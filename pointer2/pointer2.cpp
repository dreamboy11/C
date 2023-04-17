#include <stdio.h>

void swap(int *ab, int *cd); // �� ������ ���� �ٲٴ� �Լ��� ����

void swap(int x, int y); // �� ������ ���� �ٲٴ� �Լ��� ����

int main(void) {
	
	char ch;
	int in;
	double db;

	char *pc = &ch;
	int *pi = &in;
	double *pd = &db;

	printf("char�� ������ ũ�� : %d\n", sizeof(&ch));
	printf("int�� ������ ũ�� : %d\n", sizeof(&in));
	printf("double�� ������ ũ�� : %d\n", sizeof(&db));

	printf("char * �������� ũ�� : %d\n", sizeof(pc));
	printf("int * �������� ũ�� : %d\n", sizeof(pi));
	printf("double * �������� ũ�� : %d\n", sizeof(pd));

	printf("char * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pc));
	printf("int * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pi));
	printf("double * �����Ͱ� ����Ű�� ������ ũ�� : %d\n", sizeof(*pd));

	/*
	int a = 10; // ���� ����� �ʱ�ȭ
	int *pdd = &a; // ������ ����� ���ÿ� a�� ����Ű���� �ʱ�ȭ
	double *pde; // double�� ������ ����Ű�� ������

	pdd = pdd; // ������ pdd���� ������ c�� ����
	printf("%1f\n", *pde); // pdd�� ����Ű�� ������ �� ���
	*/

	int ab = 10, cd = 20; // ���� ����� �ʱ�ȭ

	swap(&ab, &cd); // �μ� ���� �Լ� ȣ��
	printf("ab :%d, cd : %d\n", ab, cd); // ���� ab,cd ���

	swap(ab, cd); // ab,cd�� ���� �����ؼ� ����
	printf("ab : %d, cd : %d\n", ab, cd); // ���� ab,cd ���

	return 0;
}

void swap(int *ab, int *cd) { // �Ű������� ������ ����
	int temp; // ��ȯ�� ���� �ӽ� ����

	temp = *ab; // temp�� ab�� ����Ű�� ������ �� ����
	*ab = *cd; // ab�� ����Ű�� ������ cd�� ����Ű�� ������ �� ����
	*cd = temp; // cd�� ����Ű�� ������ temp�� ����
}

void swap(int x, int y) { // �μ� ab, cd�� ���� x, y�� �����ؼ� ����
	int temp; // ��ȯ�� ���� ����

	temp = x; // temp�� x�� ����
	x = y; // x�� y�� ����
	y = temp; // y�� temp�� ����
}
#include <stdio.h>

int main(void) {
	int a, b;
	int sum, sub, mul, inv;

	a = 10; // ���� ����
	b = 20; // ���� ����
	sum = a + b; // ���ϱ� ���� �� ���� ����
	sub = a - b; // ���� ���� �� ���� ����
	mul = a * b; // ���ϱ� ���� �� ���� ����
	inv = -a; // ���� ���� �� ���� ����

	printf("a�� �� :%d, b�� �� : %d\n", a, b);
	printf("���� : %d\n", sum);
	printf("���� : %d\n", sub);
	printf("���� : %d\n", mul);
	printf("a�� �������� : %d\n", inv);

	double apple;
	int banana;
	int orange;

	apple = 5.0 / 2.0; // �Ǽ��� �Ǽ��� ������ ����
	banana = 5 / 2; // ������ ������ ������ ����
	orange = 5 % 2; // ������ ������ ������ ����

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	int c = 10, d = 10;

	++a; // ������ ���� 1��ŭ ����
	--b; // ������ ���� 1��ŭ ����

	printf("c : %d\n", a);
	printf("d : %d\n", b);

	int e = 5, f = 5;
	int pre, post;

	pre = (++a) * 3; // ������ ���� ������
	post = (b++) * 3; // ������ ���� ������

	printf("�ʱ갪 a = %d, b = %d\n", a, b);
	printf("������: (++a) * 3 = %d, ������: (b++) * 3 = %d\n", pre, post);

	int g = 10, h = 10, i = 10;
	int res; // ���(result)���� ������ ����

	res = (g > h); // g�� h���� ũ�� �����Ƿ� ������� 0
	printf("g > h : %d\n", res);

	res = (g >= h); // g�� h���� ũ���� �ʰ� ������ �����Ƿ� ������� 0
	printf("g >= h : %d\n", res);

	res = (g < h); // g�� h���� �����Ƿ� ������� 1
	printf("g < h : %d\n", res);

	res = (g <= h); // g�� h���� �����Ƿ� ������� 1
	printf("g <= h : %d\n", res);

	res = (g <= i); // g�� i���� ������ ������ �����Ƿ� ������� 1
	printf("g <= i : %d\n", res);

	res = (g == i); // g�� i�� ���� �����Ƿ� ������� 0
	printf("g == i : %d\n", res);

	res = (g != i); // g�� i�� �����Ƿ� ������� 0
	printf("g != i : %d\n", res);

	int j = 30;
	int res2;

	res2 = (j > 10) && (j < 20); // ���װ� ������ ��� ���̸� ��
	printf("(j > 10 && (j < 20) : %d\n", res2);

	res2 = (j < 10) || (j < 20); // ���װ� ���� �� �ϳ��� ���̸� ��
	printf("(j < 10 || (j < 20) : %d\n", res2);

	res2 = !(j >= 30); // �����̸� ������, ���̸� ��������
	printf("!(j >= 30) : %d\n", res2);

	int k = 10, l = 20, res3;

	k + j; // ���� ����� ������
	printf("%d + %d = %d\n", k, l, k + l); // ���� ����� �ٷ� ��¿� ���

	res3 = k + l; // ���� ����� ������ ����
	printf("%d + %d = %d\n", k, l, res3); // ����� ���� ����� ��� ���

	return 0;
}
#include <stdio.h>

int main(void) {
	int a = 20, b = 3;
	double res;

	res = ((double)a / (double)b); // a�� b�� ���� �Ǽ������� ��ȯ
	printf("a = %d, b = %d\n", a, b);
	printf("a / b�� ��� %.1lf\n", res);

	a = (int)res; // res�� ������ ���� �κи� �߸�
	printf("(int) %.1lf�� ��� %d\n", res, a);

	int c = 10;
	double d = 3.4;

	printf("int�� ������ ũ�� : %d\n",sizeof(c));
	printf("double�� ������ ũ�� : %d\n", sizeof(d));
	printf("������ ����� ũ��: %d\n", sizeof(10));
	printf("������ ������� ũ�� : %d\n", sizeof(1.5 + 3.4));
	printf("char �ڷ����� ũ�� : %d\n", sizeof(char));

	int e = 10, f = 20;
	int res2 = 2;

	e += 20; // e�� 20�� ���� ����� �ٽ� e�� ����
	res2 *= f + 10; // f�� 10�� ���� ������� res�� ���ϰ� �ٽ� res2�� ����

	printf("e = %d, f = %d\n", e, f);
	printf("res = %d\n", res2);
	
	int g = 10, h = 20;
	int res3;

	res3 = (++g, ++h); // ���ʷ� ������ ����Ǹ� ��������� res3�� ����Ǵ� ���� ������ h�� ���̴�.

	printf("g : %d, h: %d\n", g, h);
	printf("res3 : %d\n", res3);

	int i = 10, j = 20, res4;

	res4 = (i > j) ? i : j; // i�� j �߿� ū ���� res4�� ����
	printf("ū �� : %d\n", res4);

	int k = 10; // ��Ʈ�� 00000000 00000000 00000000 00001010
	int l = 12; // ��Ʈ�� 00000000 00000000 00000000 00001100

	printf("k & l : %d\n", k & l);
	printf("k ^ l : %d\n", k ^ l);
	printf("k | l : %d\n", k | l);
	printf("~k : %d\n", ~k);
	printf("k << 1 : %d\n", k << 1);
	printf("k >> 2 : %d\n", k >> 2);

	int m = 10, n = 5;
	int res5;

	res5 = m / n * 2; // �켱������ �����Ƿ� ���ʺ��� ���ʷ� ����
	printf("res5 = %d\n", res5);
	res5 = ++m * 3; // m�� ���� 1 ������Ű�� 3�� ���Ѵ�.
	printf("res5 = %d\n", res5);
	res5 = m > n && m != 5; // m > n�� ����� m != 5�� ����� &&�� ����
	printf("res5 = %d\n", res5);
	res5 = m % 3 == 0; // m % 3�� ���� 0�� ������ Ȯ��
	printf("res5 = %d\n", res5);

	return 0;
}
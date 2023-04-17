#include <stdio.h>
#include <string.h> // string.h ��� ���� ����

int main(void) {
	int a; // int�� ���� ����
	int b, c; // �� ���� int�� ������ ���� ����
	double da; // double�� ���� ����
	char ch; // char�� ���� ����

	a = 10; // int�� ���� a�� ���� 10 ����
	b = a; // int�� ���� b�� ���� a�� �� ����
	c = a + 20; // int�� ���� c�� ���� a�� ���� ���� 20�� ���� �� ����
	da = 3.5; // double�� ���� da�� �Ǽ� 3.5 ����
	ch = 'A'; // char�� ���� ch�� ���� 'A' ����

	printf("���� a�� �� : %d\n", a);
	printf("���� b�� �� : %d\n", b);
	printf("���� c�� �� : %d\n", c);
	printf("���� da�� �� : %.1lf\n", da);
	printf("���� ch�� �� : %c\n", ch);

	int e; // 9�࿡�� ���� �������� �ʱ�ȭ
	int f = 20; // ���� ����� ���ÿ� �ʱ�ȭ
	int g; // �ʱ�ȭ���� ����

	e = 10; // e�� 10 ����, �ʱ�ȭ
	printf("e:%d\n", e);
	printf("f:%d\n", f);
	printf("g:%d\n", g);

	char ch1 = 'A';
	char ch2 = 65;

	printf("���� %c�� �ƽ�Ű �ڵ尪 : %d\n", ch1, ch1);
	printf("�ƽ�Ű �ڵ尪�� %d�� ���� : %c\n", ch2, ch2);

	short sh = 32767;
	int in = -2147483648;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long�� ���� ��� : %1d\n", ln);
	printf("long long�� ���� ��� : %11d\n", lln);

	unsigned int h;

	h = 4294967295; // ū ��� ����
	printf("%d\n", h); // %�� ���
	h = -1; // ���� ����
	printf("%u\n", h); // %u�� ���

	float ft = 1.234567890123456789; // ��ȿ���ڰ� ���� ������ �ʱ�ȭ
	double db = 1.234567890123456789;

	printf("float�� ������ �� : %.20f\n", ft); // �Ҽ��� ���� 20�ڸ����� ���
	printf("double�� ������ �� : %.20lf\n", db);

	char fruit[20] = "strawberry";

	printf("���� : %s\n", fruit);
	printf("����´ : %s %s\n", fruit, "jam");
	printf("�����ϴ� ���� : %s\n", fruit);

	char fruit2[20] = "strawberry"; // strawberry �ʱ�ȭ

	printf("%s\n", fruit2); // strawberry ���
	strcpy(fruit2, "banana"); // fruit2�� banana ����
	printf("%s\n", fruit2); // banana ���

	int income = 0; // �ҵ�� �ʱ�ȭ
	double tax; // ����
	const double tax_rate = 0.12; // ���� �ʱ�ȭ

	income = 456; // �ҵ�� ����
	tax = income * tax_rate; // ���� ���
	printf("������ : %.1lf�Դϴ�.\n", tax);

	return 0;
}
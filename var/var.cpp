#include <stdio.h>

/* void assign(void); // �Լ� ���� */

/*
void assign10(void);
void assign20(void);
*/

/*
void auto_func(void);
void static_func(void);
*/

int a; // ���� ���� ����

int main(void) {
	/*
	int a = 0; 
	// ���� ���� ����� �ʱ�ȭ, auto�� ���� ����

	assign(); // �Լ� ȣ��
	printf("main �Լ� a : %d\n", a);
	*/

	/*
	int a = 10, b = 20;

	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);
	{
		int temp; // ��� ����

		temp = a;
		a = b; // a�� b�� 5�࿡ ����� ����
		b = temp;
	} // ��� ��

	printf("��ȯ �� a�� b�� �� : %d,%d\n", a, b);
	*/

	/*
	printf("�Լ� ȣ�� �� a�� : %d\n", a); // ���� ���� a ���

	assign10();
	assign20();

	printf("�Լ� ȣ�� �� a�� : %d\n", a); // ���� ���� a ���
	*/

	/*
	int i;

	printf("auto ���� ������ ����� �Լ�...\n");
	
	for (i = 0; i < 3; i++) {
		auto_func();
	}

	printf("static ���� ������ ����� �Լ�...\n");

	for (i = 0; i < 3; i++) {
		static_func();
	}
	*/

	register int i; // �������� ����
	int sum = 0; // auto ���� ����

	for (i = 1; i <= 10000; i++) { // �ݺ� �������� i�� ��� �����
		sum += i; // i���� �ݺ��Ͽ� ����
	}

	printf("%d\n", sum);

	return 0;
}

/*
void assign(void) {
	int a; // main �Լ��� �ִ� ������ ���� �̸��� ���� ����

	a = 10; // assign �Լ� �ȿ� ����� a�� ����
	printf("assign �Լ� a : %d\n", a); // assign �Լ��� ����� a�� ���
}
*/

/*
void assign10(void) {
	a = 10; // ���� ���� a�� 10 ����
}
*/

/*
void assign20(void) {
	int a; // ���� ������ ���� �̸��� ���� ���� ����

	a = 20; // ���� ���� a�� 20 ����
}
*/

/*
void auto_func(void) {
	int a = 0; // ���� ���� ����� �ʱ�ȭ

	a++; // a�� 1 ����
	printf("%d\n", a); // a ���
}
*/

/*
void static_func(void) {
	static int a; // ���� ���� ���� ����

	a++; // a�� 1 ����
	printf("%d\n", a); // a ���
}
*/
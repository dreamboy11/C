#include <stdio.h> // �ý��� ��� ������ ���� ����
/* #include "student.h" */ // ����� ���� ��� ������ ���� ����
/*
#define PI 3.14159 // ����� ��ũ�θ����� ����
#define LIMIT 100.0 // ����� ��ũ�θ����� ����
#define MSG "passed!" // ���ڿ��� ��ũ�θ����� ����
#define ERR_PRN printf("������ ������ϴ�!\n"); 
// ��¹��� ��ũ�θ����� ����
*/
/*
#define SUM(a, b) ((a)+(b)) // �� ���� ���ϴ� ��ũ�� �Լ�
#define MUL(a, b) ((a)*(b)) // �� ���� ���ϴ� ��ũ�� �Լ�
*/
/*
void func(void);
*/
/*
#define PRINT_EXPR(x) printf(#x " = %d\n",x)
#define NAME_CAT(x, y) (x ## y)
*/
/*
#define VER 7 // ġȯ�� �κ��� �ִ� ��ũ�θ� ����
#define BIT16 // ġȯ�� �κ��� ���� ��ũ�θ� ����
*/
#pragma pack(push , 1) // ����Ʈ ����θ�Ʈ�� 1�� �ٲ�
typedef struct {
	char ch;
	int in;
}Sample1;

#pragma pack(pop) // �ٲٱ� ���� ����Ʈ ����θ�Ʈ ����
typedef struct {
	char ch;
	int in;
}Sample2;

int main(void) {
	/*
	Student a = { 315, "ȫ�浿" }; // ����ü ���� ����� �ʱ�ȭ
	
	printf("�й� : %d, �̸� : %s\n", a.num, a.name); // ����ü ��� ���
	*/

	/*
	double radius, area; // �������� ���� ����

	printf("�������� �Է��ϼ��� : ");

	scanf("%lf", &radius); // ������ �Է�

	area = PI * radius * radius; // ���� ���
	
	if (area > LIMIT) {
		ERR_PRN; // ������ 100�� �ʰ��ϸ� ���� �޽��� ���
	}
	else {
		printf("���� ���� : %.2lf (%s)\n", area, MSG); 
		// ������ �޽��� ���
	}
	*/

	/*
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b)); // a�� b�� ��
	printf("x + y = %d\n", SUM(x, y)); // x�� y�� ��
	res = 30 / MUL(2, 5);// 30�� 2�� 5�� ������ ����
	printf("res : %d\n", res);
	*/

	/*
	printf("������ ��¥�� �ð� : %s, %s\n\n", __DATE__, __TIME__);
	printf("���ϸ� : %s\n", __FILE__);
	printf("�Լ��� : %s\n", __FUNCTION__);
	printf("���ȣ : %d\n", __LINE__);

#line 100 "macro.c" // �� ��ȣ�� 100���� ����, ���ϸ��� macro.c�� ǥ��
	func(); // ������� �� ��ȣ�� 100���� ����
	*/

	/*
	int a1, a2;

	NAME_CAT(a, 1) = 10; // (a1) = 10;
	NAME_CAT(a, 2) = 20; // (a2) = 20;
	PRINT_EXPR(a1 + a2); // printf("a1 + a2" " = %d\n", a1 + a2);
	PRINT_EXPR(a2 - a1); // printf("a2 - a1" " = %d\n", a2 - a1);
	*/

	/*
	int max;

#if VER >= 6 // ��ũ�θ� VER�� 6 �̻��̸�
	printf("���� %d�Դϴ�.\n", VER); // �� ���� ������
#endif // if�� ��

#ifdef BIT16 // ��ũ�θ� BIT16�� ���ǵǾ� ������
	max = 32767; // �� ���� ������
#else // BIT16�� ���ǵǾ� ���� ������
	max = 2147483647; // �� ���� ������
#endif // ifdef�� ��

	printf("int�� ������ �ִ� : %d\n", max); // max ���

	*/

	printf("Sample1 ����ü�� ũ�� : %d����Ʈ\n", sizeof(Sample1));
	printf("Sample2 ����ü�� ũ�� : %d����Ʈ\n", sizeof(Sample2));

	return 0;
}

/*
void func(void) {
	printf("\n");
	printf("���ϸ� : %s\n", __FILE__);
	printf("�Լ��� : %s\n", __FUNCTION__);
	printf("���ȣ : %d\n", __LINE__);
}
*/

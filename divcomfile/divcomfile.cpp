#include <stdio.h>

/*
void input_data(int *, int *); // �� ������ �Է��ϴ� �Լ� ����
double average(int, int); // ����� ���ϴ� �Լ� ����
*/
int input_data(void); // ����� �Է��ϰ� �� ���� ��ȯ
double average(void); // ����� ���ϴ� �Լ�
void print_data(double); // ��� �Լ�

int cnt = 0; // �Է��� ����� �� ����
static int tot = 0; // �Է��� ����� ��


int main(void) {
	/*
	int a, b;
	double avg;

	input_data(&a, &b); // �� ���� �Է�
	avg = average(a, b); // ��� ���
	printf("%d�� %d�� ��� : %.1lf\n", a, b, avg); // �Է°��� ��� ���
	*/

	double avg; // �Է��� ����� ���

	tot = input_data(); // ����� �Է��ϰ� �� ���� ��ȯ
	avg = average(); // ��� ���
	print_data(avg);

	return 0;
}


void print_data(double avg) {
	printf("�Է��� ����� ���� : %d\n", cnt);
	printf("��ü �հ� ��� : %d, %.1lf\n", tot, avg);
}

#include <stdio.h>

/*
void print_ary(int *pa); // �Լ� ����
*/

void print_ary(int *pa, int size); // �Լ� ����, �Ű����� 2��

void input_ary(double *pa, int size);
double find_max(double *pa, int size);

int main(void) {
	/*
	int ary[5] = { 10, 20, 30, 40, 50 };

	print_ary(ary); // �迭���� �ְ� �Լ� ȣ��
	*/

	int ary1[5] = { 10, 20, 30, 40, 50 }; // �迭 ��� ���� 5���� �迭
	int ary2[7] = { 10, 20, 30, 40, 50, 60, 70 }; // �迭 ��� ���� 7���� �迭

	print_ary(ary1, 5); // ary1 �迭 ���, �迭 ��� �� ����
	printf("\n");
	print_ary(ary2, 7); // ary2 �迭 ���, �迭 ��� �� ����

	double ary[5];
	double max; // �ִ밪�� ������ ����
	int size = sizeof(ary) / sizeof(ary[0]); // �迭 ��� �� ���

	input_ary(ary, size); // �迭�� �� �Է�
	max = find_max(ary, size); // �迭�� �ִ밪 ��ȯ
	printf("�迭�� �ִ밪 : %.1lf\n", max);

	return 0;
}

/*
void print_ary(int *pa) { // �Ű������� ������ ����
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d ", pa[i]); // pa�� �迭 ��� ǥ���� ���
	}
}
*/

void print_ary(int *pa, int size) { // �迭 ��� ���� �޴� �Ű� ���� ����
	int i;

	for (i = 0; i < size; i++) { // size�� ���� ���� �ݺ� Ƚ�� ����
		printf("%d ", pa[i]);
	}
}

void input_ary(double *pa, int size) { // double �����͸� �Ű������� ����
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);

	for (i = 0; i < size; i++) { // size�� ���� ���� �ݺ� Ƚ�� ����
		scanf("%1f", pa + i); // &pa[i]�� ����, �Է��� �迭 ����� �ּҸ� ����
	}
}

double find_max(double *pa, int size) {
	double max;
	int i;

	max = pa[0]; // ù ��° �迭 ����� ���� �ִ밪���� ����
	
	for (i = 1; i < size; i++) { //�� ��° �迭 ��Һ��� max�� ��
		if (pa[i] > max) {
			max = pa[i]; // ���ο� �迭 ����� ���� max���� ũ�� ����
		}
	}

	return max; // �ִ밪 ��ȯ
}
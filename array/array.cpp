#include <stdio.h>

int main(void) {
	int ary[5]; // int�� ��� 5���� �迭 ����

	ary[0] = 10; // ù ��° �迭 ��ҿ� 10 ����
	ary[1] = 20; // �� ��° �迭 ��ҿ� 20 ����
	ary[2] = ary[0] + ary[1]; // ù ��°�� �� ��° ��Ҹ� ���� �� ��° ����
	scanf("%d", &ary[3]); // Ű����� �� ��° ��ҿ� �Է�

	printf("%d\n", ary[2]); // �� ��° �迭 ��� ���
	printf("%d\n", ary[3]);
	printf("%d\n", ary[4]); // ������ �迭 ��Ҵ� �����Ⱚ

	int ary3[5] = { 1, 2, 3, 4, 5 }; // int�� �迭 �ʱ�ȭ
	int ary4[5] = { 1, 2, 3 }; // �ʱⰪ�� ���� ���
	int ary5[] = { 1, 2, 3 }; // �迭 ��� ������ ������ ���
	double ary6[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 }; // double�� �迭 �ʱ�ȭ
	char ary7[5] = { 'a', 'p', 'p', '1', 'e' }; // char�� �迭 �ʱ�ȭ

	ary3[0] = 10;
	ary3[1] = 20;
	ary3[2] = 30;
	ary3[3] = 40;
	ary3[4] = 50;

	int score[5]; // �ټ� ������ ������ �Է��� int�� �迭 ����
	int i; // �ݺ� ���� ����
	int tot = 0; // ������ ������ ����
	double avg; // ����� ������ ����
	int cnt; // �迭 ��� ���� ������ ����

	cnt = sizeof(score) / sizeof(score[0]); // �迭 ��� �� ���

	for (i = 0; i < cnt; i++) { // cnt��ŭ �ݺ�
		scanf("%d", &score[i]);
	}

	for (i = 0; i < cnt; i++) { // cnt��ŭ �ݺ�
		tot += score[i];
	}
	avg = tot / double(cnt); // ������ cnt�� ������ ��� ���

	for (i = 0; i < cnt; i++) { // cnt��ŭ �ݺ�
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
}
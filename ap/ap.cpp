#include <stdio.h>

int main(void) {
	/*
	int ary[5] = { 10, 20, 30, 40, 50 };

	printf("�迭�� ��ü�� �� : %u\n", ary);
	printf("ù ��° �迭 ����� �ּ� : %u\n", &ary[0]);
	printf("�迭���� ����Ű�� ����� �� : %d\n", *ary);
	printf("ù ��° �迭 ����� �� : %d\n", ary[0]);
	*/

	/*
	int ary[3];
	int i;

	*(ary + 0) = 10; // ary[0] = 10
	*(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10

	printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
	scanf("%d", ary + 2); // ary[2]

	for (i = 0; i < 3; i++) { // ��� �迭 ��� ���
		printf("%5d", *(ary + i)); // ary[i]
	}
	*/

	/*
	int ary[3]; // �迭 ����
	int *pa = ary; // �����Ϳ� �迭�� ����
	int i; // �ݺ� ���� ����

	*pa = 10; // ù ��° �迭 ��ҿ� 10 ����
	*(pa + 1) = 20; // �� ��° �迭 ��ҿ� 20 ����
	pa[2] = pa[0] + pa[1]; // ���ȣ�� �Ἥ pa�� �迭��ó�� ���

	for (i = 0; i < 3; i++) {
		printf("%5d", pa[i]); // �����ͷ� ��� �迭 ��� ���
	}
	*/

	/*
	int ary[3] = { 10, 20, 30 };
	int *pa = ary;
	int i;

	printf("�迭�� �� : ");
	for (i = 0; i < 3; i++) {
		printf("%d", *pa); // pa�� ����Ű�� �迭 ��� ���
		pa++; // ���� �迭 ��Ҹ� ����Ű���� pa�� ����
	}
	*/

	int ary[5] = { 10, 20, 30, 40, 50 };
	int *pa = ary; // ù ��° �迭 ��� �ּ�
	int *pb = pa + 3; // �� ��° �迭 ��� �ּ�

	printf("pa : %u\n", pa);
	printf("pb : %u\n", pb);
	pa++; // pa�� ���� �迭 ��ҷ� �̵�
	printf("pb - pa : %u\n", pb - pa); // �� �������� ����

	printf("�տ� �ִ� �迭 ����� �� ��� : ");

	if (pa < pb) { // pa�� �迭�� �տ� ������ *pa ���
		printf("%d\n", *pa);
	} else { // pb�� �迭�� �տ� ������ *pb ���
		printf("%d\n", *pb);
	}

	return 0;
}
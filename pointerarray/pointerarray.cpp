#include <stdio.h>

int main(void) {
	/*
	char *pary[5]; // ������ �迭 ����
	int i; // �ݺ� ���� ����

	pary[0] = "dog"; // �迭 ��ҿ� ���ڿ� ����
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (i = 0; i < 5; i++) { // i�� 0���� 4���� 5�� �ݺ�
		printf("%s\n", pary[i]); // �迭 ��Ҹ� ����Ͽ� ��� ���ڿ� ���
	}
	*/

	int ary1[4] = { 1, 2, 3, 4 }; 
	// 1���� �迭�� ����� �ʱ�ȭ
	int ary2[4] = { 11, 12, 13, 14 };
	int ary3[4] = { 21, 22, 23, 24 };
	int *pary[3] = { ary1, ary2, ary3 }; 
	// ������ �迭�� �� �迭�� �ʱ�ȭ
	int i, j; // �ݺ� ���� ����

	for (i = 0; i < 3; i++) { // 3�� �ݺ�
		for (j = 0; j < 4; j++) { // 4�� �ݺ�
			printf("%5d", pary[i][j]); // 2���� �迭ó�� ���
		}
		printf("\n"); // �� ���� ����� �Ŀ� �� �ٲ�
	}

	return 0;
}
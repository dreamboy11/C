#include <stdio.h>

extern int cnt; // divcomfile ������ ���� ���� cnt ����
int tot = 0; // ���� ���� ����

int input_data(void) {
	int pos; // ��� ����

	while (1) {
		printf("��� �Է� : ");
		scanf("%d", &pos); // ��� �Է�
		if (pos < 0) { // ������ �Է� ����
			break;
		}
		cnt++; // ���� ����
		tot += pos; // �Է°��� ���� ���� tot�� ����
	}
	return tot; // ���� ���� tot�� �� ��ȯ
}
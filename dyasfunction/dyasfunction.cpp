#include <stdio.h>
#include <stdlib.h> // malloc, free �Լ� ����� ���� ��� ����

int main(void) {
	/*
	int *pi; // ���� �Ҵ� ������ ������ ������ ����
	double *pd;

	pi = (int *) malloc(sizeof(int)); // �޸� ���� �Ҵ� �� ������ ����
	
	if (pi == NULL) { // ���� �Ҵ翡 �����ϸ� NULL ������ ��ȯ
		printf("#���� �޸𸮰� �����մϴ�.\n"); // ���� ��Ȳ ������ ���
		exit(1); // ���α׷� ����
	}

	pd = (double *) malloc(sizeof(double));

	*pi = 10; // �����ͷ� ���� �Ҵ� ���� ���
	*pd = 3.4;

	printf("���������� ��� : %d\n", *pi); 
	// ���� �Ҵ� ������ ����� �� ���
	printf("�Ǽ������� ��� : %1f\n", *pd);

	free(pi); // ���� �Ҵ� ���� ��ȯ
	free(pd);
	*/

	/*
	int *pi; // ���� �Ҵ� ������ ������ ������
	int i, sum = 0; // �ݺ� ���� ������ ���� ����

	pi = (int *) malloc(5 * sizeof(int)); // ���� ���� 20����Ʈ �Ҵ�

	if (pi == NULL) {
		printf("�޸𸮰� �����մϴ�!\n");
		exit(1);
	}

	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");

	for (i = 0; i < 5; i++) { // i�� 0���� 4���� 5�� �ݺ�
		scanf("%d", &pi[i]); // �迭 ��ҿ� �Է�
		sum += pi[i]; // �迭 ����� �� ����
	}

	printf("�ټ� ���� ��� ���� : %.1lf\n", (sum / 5.0)); 
	// ��� ���� ���
	
	free(pi);
	*/

	int *pi; // �Ҵ��� ���� ������ ������ ������
	int size = 5; // �� ���� �Ҵ��� ���� ������ ũ��, int�� ���� 5����
	int cnt = 0; // ���� �Էµ� ��� ����
	int num; // ����� �Է��� ����
	int i; // �ݺ� ���� ����

	pi = (int *) calloc(size, sizeof(int)); // ���� 5���� ���� ���� �Ҵ�

	while(1) {
		printf("����� �Է��ϼ��� => ");
		scanf("%d", &num); // ������ �Է�
		
		if (num <= 0) { // 0 �Ǵ� �����̸� ����
			break;
		}

		if (cnt == size) { // ���� ������ ��� ����ϸ�
			size += 5; // ũ�⸦ �÷��� ���Ҵ�
			pi = (int *) realloc(pi, size * sizeof(int));
		}
		pi[cnt++] = num;
	}

	for (i = 0; i < cnt; i++) {
		printf("%5d\n", pi[i]); // �Է��� ������ ���
	}
	free(pi); // ���� �Ҵ� ���� ���� �ݳ�

	return 0;
}
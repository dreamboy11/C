#include <stdio.h>
/* #include <string.h> */

int main(void) {
	/*
	FILE *ifp, *ofp; // ���� ������ ����
	char str[80]; // �Է��� ���ڿ��� ������ �迭
	char *res; // fgets �Լ��� ��ȯ���� ������ ����

	ifp = fopen("a.txt", "r"); // �Է� ������ �б� �������� ����
	if (ifp == NULL) { // ���� ���� Ȯ��
		printf("�Է� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w"); // ��� ������ ���� �������� ����
	if (ofp == NULL) { // ���� ���� Ȯ��
		printf("��� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	while (1) { // ���ڿ��� �Է��ϰ� ����ϴ� ���� �ݺ�
		res = fgets(str, sizeof(str), ifp);
		if (res == NULL) { // ��ȯ���� �������͸� �ݺ� ����
			break;
		}
		str[strlen(str) - 1] = '\0'; // ���๮�� ����
		fputs(str, ofp);
		fputs("", ofp);
	}

	fclose(ifp); // �Է� ���� �ݱ�
	fclose(ofp); // ��� ���� �ݱ�
	*/

	/*
	FILE *ifp, *ofp; // ���� ������ ����
	char name[20]; // �̸�
	int kor, eng, mat; // �� ���� ����
	int tot; // ����
	double avg; // ���
	int res; // fscanf �Լ��� ��ȯ�� ����

	ifp = fopen("a.txt", "r"); // �Է� ������ �б� �������� ����

	if (ifp == NULL) { // ���� ���� Ȯ��
		printf("�Է� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	ofp = fopen("b.txt", "w"); // ��� ������ ���� �������� ����

	if (ofp == NULL) { // ���� ���� Ȯ��
		printf("��� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	while (1) {
		res = fscanf(ifp, "%s%d%d%d", name, &kor, &eng, &mat); 
		// ������ �Է�

		if (res == EOF) { // ������ �����͸� ��� ������ EOF ��ȯ
			break;
		}
		tot = kor + eng + mat; // ���� ���
		avg = tot / 3.0; // ��� ���
		fprintf(ofp, "%s%5d%7.1lf\n", name, tot, avg); 
		// �̸�, ����, ��� ���
	}
	
	fclose(ifp); // �Է� ���� �ݱ�
	fclose(ofp); // ��� ���� �ݱ�
	*/

	/*
	FILE *fp; // ���� ������
	int age; // ���� ���� ����
	char name[20]; // �̸� ���� �迭

	fp = fopen("a.txt", "r"); // ���� ����

	fscanf(fp, "%d", &age); // ���� �Է�
	fgets(name, sizeof(name), fp); // �̸� �Է�

	printf("���� : %d,�̸�:%s", age, name); // �Է� ������ ���
	fclose(fp); // ���� ����
	*/

	FILE *afp, *bfp;
	int num = 10;
	int res;

	afp = fopen("a.txt", "wt"); // �ؽ�Ʈ ���� ��� ���� ����
	fprintf(afp, "%d", num); // num�� ���� ���ڷ� ��ȯ�Ͽ� ���

	bfp = fopen("b.txt", "wb"); // ���̳ʸ� ���� ��� ���� ����
	fwrite(&num, sizeof(num), 1, bfp); // num�� ���� �״�� ���Ͽ� ���

	fclose(afp);
	fclose(bfp);

	bfp = fopen("b.txt", "rb"); // ���̳ʸ� ���� �Է� ���� ����
	fread(&res, sizeof(res), 1, bfp); 
	// ������ �����͸� �״�� ������ �Է�
	printf("%d", res); // �Է��� ������ Ȯ��

	fclose(bfp);
		
	return 0;
}
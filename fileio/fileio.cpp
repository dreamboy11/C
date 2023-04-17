#include <stdio.h>
#include <string.h>

int main(void) {
	/*
	FILE *fp; // ���� ������

	fp = fopen("a.txt", "r"); // a.txt ������ �б� �������� ����

	if (fp == NULL) { // fp�� �������͸� ���� ���� ����
		printf("������ ������ �ʾҽ��ϴ�.\n"); // �ȳ� �޽��� ���
		return 1; // ���α׷� ����
	}

	printf("������ ���Ƚ��ϴ�.\n");
	
	fclose(fp); // ���� �ݱ�
	*/

	/*
	FILE *fp; // ���� ������ ����
	int ch; // �Է��� ���ڸ� ������ ����

	fp = fopen("a.txt", "r"); // �б� �������� ���� ����

	if (fp == NULL) { // ������ ����Ǿ����� Ȯ��
		printf("������ ������ �ʾҽ��ϴ�.\n");
		return 1;
	}

	while (1) {
		ch = fgetc(fp); // ������ ���Ͽ��� ���� �Է�

		if (ch == EOF) { // �Լ��� ��ȯ���� EOF�� �Է� ����
			break;
		}
		putchar(ch); // �Է��� ���ڸ� ȭ�鿡 ���
	}
	fclose(fp); // ���� ����
	*/

	/*
	FILE *fp; // ���� ������ ����

	char str[] = "banana"; // ����� ���ڿ�

	int i; // �ݺ� ���� ����

	fp = fopen("b.txt", "w"); // ���� �������� ����

	if (fp == NULL) { // ���� ���� Ȯ��
		printf("������ ������ ���߽��ϴ�.\n");
		return 1;
	}

	i = 0; // ���� �迭�� ù ��° ���ں��� ���

	while (str[i] != '\0') { // �ι��ڰ� �ƴϸ�
		fputc(str[i], fp); // ���ڸ� ���Ͽ� ���
		i++; // ���� ���ڷ� �̵�
	}
	fputc('\n', fp);

	fclose(fp); // ���� ����
	*/

	/*
	int ch; // �Է��� ���ڸ� ������ ����

	while (1) {
		ch = getchar(); // Ű���忡�� ���� �Է�

		if (ch == EOF) { // Ctrl + Z�� �Է� ����
			break;
		}
		putchar(ch); // ȭ�鿡 ���� ���
	}
	*/

	/*
	int ch; // �Է��� ���ڸ� ������ ����

	while (1) {
		ch = fgetc(stdin); // Ű���忡�� ���� �Է�

		if (ch == EOF) { // Ctrl + Z�� �Է� ����
			break;
		}
		fputc(ch, stdout); // ȭ�鿡 ���� ���
	}
	*/

	/*
	FILE *fp;
	
	int ary[10] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };

	int i, res;

	fp = fopen("a.txt", "wb"); // ���̳ʸ� ���Ϸ� ����

	for (i = 0; i < 10; i++) {
		fputc(ary[i], fp); 
		// �迭 ����� �� ���� �ش��ϴ� �ƽ�Ű���� ���
	}
	fclose(fp); // ���� ����

	fp = fopen("a.txt", "rt"); // ���� ������ �ؽ�Ʈ ���Ϸ� ����

	while (1) {
		res = fgetc(fp); // ���Ͽ��� �� ���� �Է�

		if (res == EOF) {
			break;
		}
		printf("%4d", res); // �Է��� ������ �ƽ�Ű �ڵ尪 ���
	}
	fclose(fp); // ���� ����
	*/

	FILE *fp;

	char str[20];

	fp = fopen("a.txt", "a+"); // �б� ������ �߰� ���� ����

	if (fp == NULL) {
		printf("������ ������ ���߽��ϴ�.\n");
		return 1;
	}

	while (1) {
		printf("���� �̸� : ");

		scanf("%s", str); // Ű����� ���� �̸� �Է�

		if (strcmp(str, "end") == 0) { // end �Է� �� ����
			break;
		}
		else if (strcmp(str, "list") == 0) { 
			// list�� �Է��ϸ� ������ ���� Ȯ��
			fseek(fp, 0, SEEK_SET); 
			// ������ ��ġ �����ڸ� �� ó������ �̵�

			while (1) {
				fgets(str, sizeof(str), fp); // ���� �̸��� �д´�.

				if (feof(fp)) { // ������ ������ ��� ������ ����
					break;
				}
				printf("%s", str); // ���� ���� �̸��� ȭ�� ���
			}
		}
		else {
			fprintf(fp, "%s\n", str); // �Է��� ���� �̸��� ���Ͽ� ���
		}
	}
	fclose(fp);

	return 0;
}
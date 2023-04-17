#include <stdio.h>
#include <stdlib.h> // malloc, atoi �Լ� ����� ���� ��� ����
#include <string.h>

/*
void print_str(char **ps); // ���� �Ҵ� ������ ���ڿ��� ����ϴ� �Լ�
*/

void print_str(char **); // ���ڿ� ��� �Լ� ����

/*
int main(void) {
	char temp[80]; // �ӽ� char �迭
	char *str[3]; // ���� �Ҵ� ������ ������ ������ �迭
	int i; // �ݺ� ���� ����

	for (i = 0; i < 3; i++) {
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp); // ���ڿ� �Է�
		str[i] = (char *) malloc(strlen(temp) + 1);
		// ���ڿ� ���� ���� �Ҵ�
		strcpy(str[i], temp); // ���� �Ҵ� ������ ���ڿ� ����
	}

	for (i = 0; i < 3; i++) {
		printf("%s\n", str[i]); // �Էµ� ���ڿ� ���
	}

	for (i = 0; i < 3; i++) {
		free(str[i]); // ���� �Ҵ� ���� ��ȯ
	}

	char temp[80]; // �ӽ� char �迭
	char *str[21] = { 0 }; 
	// ���ڿ��� ������ ������ �迭, �������ͷ� �ʱ�ȭ
	int i = 0; // �ݺ� ���� ����

	while (i < 20) { // �ִ� 20������ �Է�
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp); // ���ڿ� �Է�
		
		if (strcmp(temp, "end") == 0) { // end�� �ԷµǸ� �ݺ� ����
			break;
		}

		str[i] = (char *) malloc(strlen(temp) + 1); 
		// ���ڿ� ���� ���� �Ҵ�
		strcpy(str[i], temp); // ���� �Ҵ� ������ ���ڿ� ����
		i++;
	}

	print_str(str); // �Է��� ���ڿ� ���

	for (i = 0; str[i] != NULL; i++) { // str�� ����� ���ڿ��� ���� ������
		free(str[i]); // ���� �Ҵ� ���� ��ȯ
	}

	return 0;
}
*/

/*
int main(int argc, char **argv) { // ����� �μ��� ���� �Ű�����
	int i;

	for (i = 0; i < argc; i++) { // �μ� ���� ��ŭ �ݺ�
		printf("%s\n", argv[i]); // �μ��� ���� ���ڿ� ���
	}

	return 0;
}
*/

int main(int argc, char ** argv) {
	char temp[80]; // ���ڿ� �Է��� ���� �ӽ� char �迭
	char **str; // ������ �迭�� ����� ���� �Ҵ� ���� ����
	int max; // �ִ� �Է� ���ڿ� ���� ����
	int i;

	max = atoi(argv[1]); // �� ��° ����� �μ��� ������ ��ȯ
	str = (char **) malloc((max + 1) * sizeof(char *)); 
	// ������ �迭�� ���� �Ҵ�
	i = 0;

	while (1) {
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp); // ���ڿ� �Է�
		if (temp[0] == '\0') { // ���͸� �Է��ϸ� �ݺ� ����
			break;
		}

		str[i] = (char *) malloc(strlen(temp) + 1); 
		// ���ڿ� ���� ���� ���� �Ҵ�
		strcpy(str[i], temp); // ���ڿ� ����
		i++;

		if (i == max) { // �Էµ� ���ڿ��� ���� �˻�
			printf("���ڿ� �Է��� �ִ��� ��� ä�����ϴ�.\n");
			break;
		}
	}

	str[i] = 0; // �Է��� ���� �� �������ͷ� ����
	print_str(str); // �Էµ� ���ڿ� ���

	i = 0;

	while (str[i] != 0) {
		free(str[i]); // ���ڿ��� ������ ���� �Ҵ� ���� ��ȯ
		i++;
	}

	free(str); // ������ �迭�� ���� ���� �Ҵ��� ���� ��ȯ

	return 0;

}

/*
void print_str(char **ps) { // 2�� ������ ����
	while (*ps != NULL) { // ������ �迭�� ���� �������Ͱ� �ƴ� ���� �ݺ�
		printf("%s\n", *ps); // ps�� ����Ű�� ���� ������ �迭�� ���
		ps++; // ps�� ���� �迭 ��Ҹ� ����Ų��.
	}
}
*/

void print_str(char **ps) { // 2�� ������ ps�� ������ �迭ó�� ���
	while (*ps != 0) { // ps �迭 ����� ���� �������Ͱ� �ƴ� ����
		printf("%s\n", *ps); // ps �迭 ��Ұ� �����ϰ� �ִ� ���ڿ� ���
		ps++; // ���� ��ҷ� �̵�
	}
}
#include <stdio.h>
#include <string.h> 

/* char *my_strcpy(char *pd, char *ps); */ // �Լ� ����

int main(void) {
	/*
	char str1[80] = "strawberry"; // char �迭�� ���ڿ� �ʱ�ȭ
	char str2[80] = "apple"; // char �迭�� ���ڿ� �ʱ�ȭ
	char *ps1 = "banana"; // �����ͷ� ���ڿ� ��� ����
	char *ps2 = str2; // �����ͷ� �迭 ����

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2); // �ٸ� char �迭�� ���ڿ� ����
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1); // ���ڿ� ����� ������ ������ ���
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2); // �迭�� ������ ������ ���
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, "banana"); // ���ڿ� ��� ���
	printf("�ٲ� ���ڿ� : %s\n", str1);
	*/

	/*
	char str[80] = "strawberry";

	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	my_strcpy(str, "apple"); // ���ڿ� "apple" ����
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
	// ��ȯ������ ���
	*/

	/*
	char str[20] = "mango tree"; // �迭 �ʱ�ȭ

	strncpy(str, "apple-pie", 5); // "apple-pie"���� �ټ� ���ڸ� ����
	printf("%s\n", str); // ������� ���ڿ� ���
	*/

	/**
	char str1[80], str2[80]; // �� ���ڿ��� �Է��� �迭
	char *resp; // ���ڿ��� �� �迭�� ������ ������

	printf("2���� ���� �̸� �Է� : ");
	scanf("%s%s", str1, str2); // 2���� ���ڿ� �Է�
	if (strlen(str1) > strlen(str2)) { 
		// �迭�� �Էµ� ���ڿ��� ���� ��
		resp = str1; // ù ��° �迭�� �� ��� ����
	} else {
		resp = str2; // �� ��° �迭�� �� ��� ����
		printf("�̸��� �� ������ : %s\n", resp); 
		// ���õ� �迭�� ���ڿ� ���
	}
	*/

	/*
	char str[80] = "straw"; // ���ڿ� �ʱ�ȭ

	strcat(str, "berry"); // str �迭�� ���ڿ� ���̱�
	printf("%s\n", str);
	strncat(str, "piece", 3); // str �迭�� 3���� ���� ���̱�
	printf("%s\n", str);
	*/

	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("������ ���߿� ������ ���� �̸� : ");
	
	if (strcmp(str1, str2) > 0) { 
		// str1�� str2���� ũ��(������ ���߿� ������)
		printf("%s\n", str1); // str1 ���
	} else {
		printf("%s\n", str2); // �׷��� ������ str2 ���
	}

	printf("�տ��� 3���� ���ڸ� ���ϸ� ");

	if (strncmp(str1, str2, 3) == 0) {
		// �տ��� 3���� ���ڰ� ������ 0 ��ȯ
		printf("����.\n");
	} else {
		printf("�ٸ���.\n");
	}

	return 0;
}

/*
char *my_strcpy(char *pd, char *ps) { 
	// ������� ��(pd)�� ������ ��(ps)�� ������

	char *po = pd; // pd���� ���߿� ��ȯ�ϱ� ���� ����

	while (*ps != '\0') {
		// ps�� ����Ű�� ���ڰ� �ι��ڰ� �ƴ� ����

		*pd = *ps; // ps�� ����Ű�� ���ڸ� pd�� ����Ű�� ��ġ�� ����
		pd++; // ������� ���� ��ġ�� ������ ����
		ps++; // ������ ���� ������ ��ġ�� ������ ����
	}
	*pd = '\0'; // ���簡 ��� ���� �� ������� ���� �ι��ڷ� ������

	return po; // ���簡 ���� ���� ������ ���� �ּ� ��ȯ

}
*/
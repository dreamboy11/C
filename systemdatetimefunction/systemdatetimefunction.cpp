#include <stdio.h>
#include <stdarg.h>

double my_sum(const char *format, ...); // ���� �μ� �Լ��� ����

int main(void) {
	/*
	char *day[7] = { "��", "��", "ȭ", "��", "��", "��", "��" };
	time_t res; // time�� ��ȯ�ϴ� �ð� ����
	struct tm *pt; // localtime�� ��ȯ�ϴ� �ּ� ����

	time(&res); // �� ���
	pt = localtime(&res); // �ʷ� ��¥�� ����, �ð� ���

	printf("%d��", pt -> tm_year + 1900); // tm�� �� ����� ��¥�� �ð� ���
	printf("%d��", pt -> tm_mon + 1);
	printf("%d��", pt -> tm_mday);
	printf("%s����", day[pt -> tm_wday]);
	printf("%d:%d:%d\n", pt -> tm_hour, pt -> tm_min, pt -> tm_sec);
	*/

	/*
	int lotto[6]; // 6���� ������ ������ �迭
	int num, i, j;

	srand((unsigned int)time(NULL)); // time�� ��ȯ���� srand�� seed ������ ���
	i = 0;
	
	while (i < 6) { // 6���� ������ ���� ������ �ݺ�
		num = (rand() % 45) + 1; // rand�� ������ 1~45������ ���� ����
		for (j = 0; j < i; j++) { // �迭���� ���� ���� ���������� �˻�
			if (num == lotto[j]) { // �ߺ��Ǵ� ���� ������ �ݺ� ����
				break;
			}
		}

		if (i == j) { // ���� ���� ���� �� ���ǽ��� ��
			lotto[i] = num; // ���ο� ������ lotto �迭�� ����
			i++; // �ζ� ��ȣ �� ����
		}
	}

	for (i = 0; i < 6; i++) {
		printf("%5d", lotto[i]); // lotto �迭�� �� ���
	}
	*/

	double res;

	res = my_sum("ddff", 1, 2, 3.0, 4.5); // ���� 2�� �Ǽ� 2���� �����μ��� ����
	printf("res : %.1lf\n", res);

	return 0;
}

double my_sum(const char *format, ...) { // �����μ��� ���ڿ�, �������� �����μ�
	va_list pa; // ���� �μ��� ���� ��ġ�� �����ϴ� ������
	double tot = 0;

	va_start(pa, format); // pa�� �����μ� ���� ��ġ�� ����Ű���� ����

	while (*format) { // ��ȯ���ڸ� ��� ó���� ���� �ݺ�
		if (*format == 'd') { // ��ȯ���ڰ� d��
			tot += va_arg(pa, int); // �μ��� ������ ��ȯ
		} else if (*format == 'f') { // ��ȯ���ڰ� f��
			tot += va_arg(pa, double); // �μ��� �Ǽ��� ��ȯ
		}
		format++; // ���� ��ȯ���ڷ� �̵�
	}
	va_end(pa); // ���� �۾��� ���� ��ũ��

	return tot;
}
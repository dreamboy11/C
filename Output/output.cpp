/* �ۼ��� : ������
   ��  �� : 10�� 20�� ���ϴ� ���α׷� */

#include <stdio.h>

int main(void) {
	10 + 20; // 10�� 20�� ���Ѵ�.

	printf("Be happy"); // ���ڿ� "Be happy" ���
	printf("My friend\n"); // ���ڿ� "My friend" ���

	printf("12345678901234567890\n"); // ȭ�鿡 ĭ ��ȣ ���
	printf("Be happy\n"); // "Be happy"�� ����ϰ� ���� �ٲ�
	printf("My\tfriend\n"); // "My"�� ����ϰ� �� ��ġ�� �̵� �Ŀ� "friend" ���
	printf("Goot\bd\tchance\n"); // t�� d�� �ٲٰ� �� ��ġ�� �̵� �Ŀ� "chance" ���
	printf("Cow\rW\a\n"); // C�� W�� �ٲٰ� �� �Ҹ��� ����.

	printf("%d\n", 10); // %d ��ġ�� 10 ���
	printf("%1f\n", 3.4); // %1f ��ġ�� 3.4�� �Ҽ��� ���� 6�ڸ����� ���
	printf("%.1lf\n", 3.45); // �Ҽ��� ���� ù° �ڸ����� ���
	printf("%.101f\n", 3.4); // �Ҽ��� ���� 10�ڸ����� ���

	printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0; // ���α׷� ����
}
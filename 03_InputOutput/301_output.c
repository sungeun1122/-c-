#include <stdio.h>

/*

*/

int main()
{
	printf("�⺻ ���(output)\n");
	// printf : print formatted (����ȭ�� ���)

	// "���ڿ�" ���
	printf("Hello World\n");

	// ���ڿ� (string) ����
	// �ִ� 20���� ���ڷ� ������ ���ڿ��� ������ �ִ� str1 ����
	char str1[20] = "C Language";  // 10���ڷ� ������ ���ڿ�. ���鵵 �ϳ��� ����!

	// %s : ���ڿ� ����ϴ� ����������
	printf("str1 = %s\n", str1);

	char str2[] = "Java Language"; // �ڵ������� �ʱ�ȭ, ���ڿ��� ���� ������ŭ�� ũ��� ����
	printf("str2 = %s\n", str2);

	char *str3 = "Python Language";  // ������ ���
	printf("str3 = %s\n", str3);




	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	// char �� �Է¹����� ����
	char ch;
	int a, b;

	printf("���� �ϳ� �Է� : ");
	scanf("%c", &ch);
	printf("�Է��� ���ڴ� = %c\n", ch);

	printf("���� �ϳ� �Է� : ");
	scanf("%d", &a);
	printf("�� �ٽ� ���� �ϳ� �Է� : ");

	getchar();  // ���ۿ� �����ִ� �ٹٲ� ���� ����

	scanf("%c", &ch);

	

	printf("a = %d, ch = %c\n", a, ch);

	getchar();
	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}

/*
	�Է¹��ۺ��� ����

	1. while(getchar()!= '\n');

	2. fflush(stdin):  vs������ ���

	3. __fpurge(stdin) : ������ ȯ�濡���� ���
*/
#include <stdio.h>
#pragma warning(disable:4996)
/*
	���ڿ� �Է�
*/

int main()
{
	char name[20];  // �ִ� 20���� ������ �ִ� ���ڿ� name

	printf("�̸��� �Է��ϼ��� : ");
	scanf("%s", name); // ���ڿ� �Է¹������� & ������ ������.
	// �� �ϴ� ���� ���� �Է¹޾ƾ� �Ѵ�.
	// %s : ������� ���ڿ� �Է�
	printf("���� �̸��� %s\n", name);

	int age;
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &age);

	char nick[20];
	printf("���� �Է��ϼ��� : ");
	scanf("%s", nick);
	printf("����: %d, ����: %s\n", age, nick);

	getchar();

	// ���� �Է�
	// gets()
	printf("full-name �� �Է��ϼ���:");
	gets(name);  // ���� �����ؼ� ENTER �Էµɶ����� ���� �Է�
	printf("�̸��� %s �Դϴ�\n", name);

	getchar();
	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
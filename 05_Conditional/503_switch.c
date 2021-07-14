#include <stdio.h>

/*
* switch(����)
* {
* case n1:
*	...
*	break;
* case n2:
*	...
*	break;
*
* ...
* default:
*	...
*	break;
*}
*/
int main()
{
	int n = 1;

	switch (n) // switch(����)
	{
	case 1:   // �� ���� ���� 1 �� ��� �Ʒ� �ڵ� ����
		printf("n ���� 1 �Դϴ�\n");
		break;  // switch �� ����

	case 2:   // case ���� ������ ����
		printf("n ���� 2 �Դϴ�\n");
		break;
	case 3:
		printf("n ���� 3 �Դϴ�\n");
		break;

	default:  // �� ��� case �� �ش����� �ʴ� ���� ���
		printf("�ش� ���� �ƴմϴ�\n");
	}

	// TODO :  n���� ¦���̸� "¦���Դϴ�" ���
	// Ȧ���̸� "Ȧ���Դϴ� " ���
	// switch ~ case �� ���
	n = 34;

	switch (n % 2)
	{
	case 0:
		printf("¦���Դϴ�\n");
		break;
	case 1:
		printf("Ȧ���Դϴ�\n");
		break;
	}

	// 4���� -> A
	// 3���� -> B
	// 2���� -> C
	// 1���� -> D
	// �� ���� -> F
	double point = 0.7;

	//  (int)3.14 => 3 

	switch ((int)point)   // (int)�Ǽ� => int Ÿ�Ժ�ȯ.  �Ҽ��� ���ŵ�.
	{
	case 4: // 4.0 <= point < 5.0
		printf("A����\n"); break;
	case 3:
		printf("B����\n"); break;
	case 2:
		printf("C����\n"); break;
	case 1:
		printf("D����\n"); break;
	default:
		printf("�̹� �б�� �۷���..\n");
	}



	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
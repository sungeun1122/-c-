#include <stdio.h>

/*
*	��� (Constant)
*	�ѹ� ���� �������� �����Ҽ� ���� ������
*	(������ �ݴ�)
*
*	���1 : const Ű���� ���
*	���2 : #define ���
*/

#define MAX_VALUE 100

int main()
{
	printf("���(constant)\n");
	
	const int NUM = 10; // int Ÿ�� ��� NUM ���� �� �ʱ�ȭ
	                    // �� �Ϲ������� ����� �빮�ڷ� �۸�
	//NUM = 20;  // ����� �ѹ� ���� �����ϸ� ���� �Ұ�

	printf("����� > %d\n", NUM);

	// �� rename : CTRL + R, CTRL + R

	printf("MAX_VALUE = %d\n", MAX_VALUE);
	//MAX_VALUE = 200;

	int a;
	a = 100;
	//100 = a;   // �ڵ�� ���� �Է��ϴ� ����, ����, ���ڿ� --> 'literal ���' �� �Ѵ�.
				// ������ literal => int Ÿ������ �ν�
				// �Ǽ��� literal => double Ÿ������ �ν�

	getchar();
	return 0;
}
#include <stdio.h>

/* �� �������� (local variable)
*   �� :  {  .... }
*
*   �� �ȿ��� ����� ������ �������� ���ȿ����� ��밡����
*   ���� ������ �ش� �̸��� ������ ��� �Ұ�
*
*   �̷��� ������ ��������(local variable) �̶� �ϰ�
*    local scope (���� ����) �� ���´� ��� ���մϴ�.
*    scope �� �ش� �̸��� ����Ҽ� �ִ� ����
*
*  �� �������� (global variable)
*    �Լ� �ۿ��� ����� ����
*    ����� ���� ��� �������� ��� ����.
*    global scope �� ���´�.
*/

int YEAR = 2021;  // �������� YEAR ���� �� �ʱ�ȭ

int main()
{
	int grade = 4; 

	printf("YEAR = %d\n", YEAR);

	{
		int a = 100;  // ���� ����� ���ÿ� �ʱ�ȭ.
					  // ����� �������� ��밡���� �������� a
		printf("a = %d\n", a);
		printf("grade = %d\n", grade);
		YEAR = 1988;
	} // ���� ��. �� �ȿ��� ����� ������ ���̻� ��� ���Ѵ�
	//printf("a = %d\n", a);

	printf("YEAR = %d\n", YEAR);


	int age = 32;   // 1
	{
		int age = 60;   // 2
		{
			age = 100;  
			int age = 80;  // 3
			printf("age = %d\n", age);
		}
		printf("age = %d\n", age);
	}
	printf("age = %d\n", age);




	printf("ENTER�� ������ �����մϴ�\n");
	getchar();
	return 0;
}
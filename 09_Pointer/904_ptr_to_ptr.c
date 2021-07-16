#include <stdio.h>

/*
	pointer to pointer
*/

int main()
{
	int num1 = 10;
	int *p = NULL; // int �� ����Ű�� ���� ������, �ʱ갪 NULL (�ƹ��ּҰ��� ����Ű�� �ʴ�, 0��)
	int **pp = NULL;  // int* �� ����Ű�� ���� ������, 2���� �����Ͷ�� ��

	p = &num1;
	pp = &p;  // ������ p �� �ּҸ� ���� pp

	printf("%d %p\n", num1, p);

	printf("%d %d %p %d\n", num1, *p, *pp, **pp);

	// p �� Ÿ����? -> int*
	// *p �� Ÿ����? -> int

	// pp �� Ÿ����? -> int**
	// *pp �� Ÿ����? -> int*
	// **pp �� Ÿ����? -> int

	//printf("%d\n", ***pp);  // **pp �� int ��.  ���������� * ��� �Ұ�


	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
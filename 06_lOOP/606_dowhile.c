#include <stdio.h>

/*
	do ~ while
	�ϴ� '�ѹ�' �� �����ϰ� ���ǽ� �˻�
*/

int main()
{
	int i = 1;
	while (i < 0) {
		printf("while ������\n");
	}

	i = 1;
	do {
		printf("do~while ������ %d\n", i);
	} while (i < 0);   // �����ݷ� ��!


	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
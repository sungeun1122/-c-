#include <stdio.h>

/*
* ���ǽ��� '��' �� ���� while �� �ݺ�
*
*	while(���ǽ�){
*		..
*		..
*	}
*
*/

int main()
{
	int i = 0;
	while (i < 5)
	{
		printf("i = %d\n", i);
		i++;
	}

	// for <--> while ���� 100% ��ȯ����


	// while ������ ������ 2�� ���
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ..
	// 2 x 9 = 18
	
	i = 1;
	while (i <= 9)
	{
		printf("2 x %d = %d\n", i, i * 2);
		i++;
	}


	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
#include <stdio.h>  // ǥ������� ���
#pragma warning(disable:4996) // scanf()��, ANSI C�Լ� ���� �޼��� ����

/* http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=39&sca=1070
139 : �ݺ����2 - ������A
����
2���� 9������ �� �� 2���� �Է¹޾� �Է¹��� �� ������ �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� �ݵ�� ���� �Էµ� ���� �����ܺ��� �Ʒ��� ���Ŀ� �°� ����Ͽ��� �Ѵ�.
������ ������ ������ 3ĭ�̴�.

�Է� ��
5 3

��� ��
5 * 1 =  5   4 * 1 =  4   3 * 1 =  3
5 * 2 = 10   4 * 2 =  8   3 * 2 =  6
5 * 3 = 15   4 * 3 = 12   3 * 3 =  9
5 * 4 = 20   4 * 4 = 16   3 * 4 = 12
5 * 5 = 25   4 * 5 = 20   3 * 5 = 15
5 * 6 = 30   4 * 6 = 24   3 * 6 = 18
5 * 7 = 35   4 * 7 = 28   3 * 7 = 21
5 * 8 = 40   4 * 8 = 32   3 * 8 = 24
5 * 9 = 45   4 * 9 = 36   3 * 9 = 27
*/
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	if (a > b)
	{
		for (int i = 1; i <= 9; i++)
		{

			for (int dan = a; dan >= b; dan--)
			{
				printf("%d * %d =%3d   ", dan, i, dan * i);
			}
			printf("\n");
		}
	}
	else
	{
		for (int i = 1; i <= 9; i++)
		{
			for (int dan = a; dan <= b; dan++)
			{
				printf("%d * %d =%3d   ", dan, i, dan * i);
			}
			printf("\n");
		}
	}


	getchar();
	getchar();
	return 0;
} //end main()

#include <stdio.h>
#pragma warning(disable:4996)

/*
http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=26&sca=1060
�ݺ����1 - ������2
0 �̻��� �������� �������� ���еǾ� �ݺ������� �־�����.
0�� �ԷµǸ� �ݺ����� ���߰� �� ������ �Է¹��� ���鿡 ���Ͽ�
Ȧ���� ������ ¦���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

[�Է¿�]
9 7 10 5 33 65 0

[��¿�]
odd : 5
even : 1
*/

int main()
{
	int odd = 0;
	int even = 0;

	int n;
	for (;;) {
		scanf("%d", &n);

		if (n == 0) {
			getchar();
			break;
		}

		if (n % 2 == 0)
			even++;
		else
			odd++;
	}

	printf("odd : %d\n", odd);
	printf("even : %d\n", even);

	printf("\nENTER �� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} // end main()
#include <stdio.h>
#pragma warning(disable:4996)

/*
http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=53&sca=1090
�迭1 - ������4
����]
100���� ������ �Է¹��� �� �ִ� �迭�� ������ �� ������ ���ʷ� �Է� �޴ٰ�
-1�� �ԷµǸ� �Է��� �ߴ��ϰ� -1�� ������ ������ �� ���� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�. (�Է¹��� ������ -1�� �����ϰ� 3�� �̸��� ��쿡�� -1�� �����ϰ� �Է¹��� ������ ��� ����Ѵ�.)

�Է� ��
30 20 10 60 80 -1

��� ��
10 60 80
*/

int main()
{
	int arr[100];
	int i;
	for (i = 0; i<100; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == -1) break;
	}

	int j;
	if (i < 3)
		j = 0;
	else
		j = i - 3;

	for (; j < i; j++) {
		printf("%d ", arr[j]);
	}

	getchar();
	printf("\nENTER �� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} // end main()
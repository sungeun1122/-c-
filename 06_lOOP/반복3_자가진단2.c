#include <stdio.h>
#pragma warning(disable:4996)

/*
http://www.jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=2078&sca=1080
634 : �ݺ����3 - �ڰ�����2
�ڿ��� n�� �Է¹޾Ƽ� n�ٸ�ŭ ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է� ��
5

��� ��
*
**
***
****
*****

*/

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}


	getchar();
	getchar();
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

/*
164 : �迭2 - ������5
http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=64&sca=10a0

[����]
ȣ���̳� �б��� 6�г��� �� ���� �ִµ� �� ���� ��ǥ�� �� �� �����Ͽ� �������� ������ �Ͽ���.
�ݺ��� �� ���� ���⸦ �� ������ �Է¹޾� �� �ݺ��� ���⸦ �� ������ �հ踦 ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
(�ݵ�� �迭�� �̿��ϰ� �Է��Ŀ� ����ϴ� ������� �ϼ���.)

[�Է¿�]
1class? 15 2 35
2class? 33 1 6
3class? 5 10 19
4class? 1 8 55

[��¿�]
1class : 52
2class : 40
3class : 34
4class : 64


[�Է¿�]
72 67 49
97 42 38
59 2 18
81 16 86

[��¿�]
1class : 188
2class : 177
3class : 79
4class : 183


*/
int main()
{
	int arr[4][3] = { 0 };
	int sum[4] = { 0 };

	for (int row = 0; row < 4; row++) {
		printf("%dclass? ", row + 1);
		for (int col = 0; col < 3; col++) {
			scanf("%d", &arr[row][col]);
			sum[row] += arr[row][col];
		}
	}

	for (int row = 0; row < 4; row++) {
		printf("%dclass : %d\n", (row + 1), sum[row]);
	}


	getchar();
	printf("\n�ƹ�Ű�� �Է��ϸ� ���α׷��� �����մϴ�\n");
	getchar();
	return 0;
}
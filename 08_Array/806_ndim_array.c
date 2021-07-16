#include <stdio.h>

/* ������ �迭 (n-dimensional array)
*	�迭 ÷��(index)��
*	�ϳ� ����ϸ� --> 1���� �迭
*	�ΰ� ����ϸ� --> 2���� �迭
*	..
*  n�����迭�� n-1���� �迭�� �迭
*/

int main()
{
	// 2���� �迭 ����
	int arr1[4][3];   // 4 x 3,  4��3��, 4 x int[3]

	// ���������� �ʱ�ȭ(���ʴ��)
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;
	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;
	arr1[2][0] = 7;
	arr1[2][1] = 8;
	arr1[2][2] = 9;
	arr1[3][0] = 10;
	arr1[3][1] = 11;
	arr1[3][2] = 12;

	int arr2[4][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
		{10, 11, 12}
	};

	int arr3[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
				// {[0][0], [0][1], [0][2], [1][0]...  [3][2]}

	printf("%d\n", arr2[2][2]); // 9
	printf("%d\n", arr2[3][1]); // 11 

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("arr[%d][%d] = %d\n", i, j, arr1[i][j]);
		}
	}

	printf("\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d ", arr1[i][j]);
		}
		printf("\n");
	}

	int arr4[4][3] = { 0 };  // ��ü 0 ���� �ʱ�ȭ
	printf("\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d ", arr4[i][j]);
		}
		printf("\n");
	}


	//int arr3[3][4][2];   // 3 x int[4][2]
	//int arr4[5][3][6][2];   // 5 x int[3][6][2]

	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
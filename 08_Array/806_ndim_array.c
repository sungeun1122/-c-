#include <stdio.h>

/* 다차원 배열 (n-dimensional array)
*	배열 첨자(index)를
*	하나 사용하면 --> 1차원 배열
*	두개 사용하면 --> 2차원 배열
*	..
*  n차원배열은 n-1차원 배열의 배열
*/

int main()
{
	// 2차원 배열 선언
	int arr1[4][3];   // 4 x 3,  4행3열, 4 x int[3]

	// 개별적으로 초기화(차례대로)
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

	int arr4[4][3] = { 0 };  // 전체 0 으로 초기화
	printf("\n");

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%2d ", arr4[i][j]);
		}
		printf("\n");
	}


	//int arr3[3][4][2];   // 3 x int[4][2]
	//int arr4[5][3][6][2];   // 5 x int[3][6][2]

	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
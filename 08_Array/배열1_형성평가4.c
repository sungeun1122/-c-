#include <stdio.h>
#pragma warning(disable:4996)

/*
http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=53&sca=1090
배열1 - 형성평가4
문제]
100개의 정수를 입력받을 수 있는 배열을 선언한 후 정수를 차례로 입력 받다가
-1이 입력되면 입력을 중단하고 -1을 제외한 마지막 세 개의 정수를 출력하는 프로그램을 작성하시오. (입력받은 정수가 -1을 제외하고 3개 미만일 경우에는 -1을 제외하고 입력받은 정수를 모두 출력한다.)

입력 예
30 20 10 60 80 -1

출력 예
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
	printf("\nENTER 를 누르면 종료됩니다\n");
	getchar();
	return 0;
} // end main()
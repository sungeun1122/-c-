#include <stdio.h>
#pragma warning(disable:4996)

/*
http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=26&sca=1060
반복제어문1 - 형성평가2
0 이상의 정수들이 공백으로 구분되어 반복적으로 주어진다.
0이 입력되면 반복문을 멈추고 그 전까지 입력받은 수들에 대하여
홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오.

[입력예]
9 7 10 5 33 65 0

[출력예]
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

	printf("\nENTER 를 누르면 종료됩니다\n");
	getchar();
	return 0;
} // end main()
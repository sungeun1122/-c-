#include <stdio.h>
#pragma warning(disable:4996)

/*

http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=199&sca=1090
10개의 정수를 입력받아 배열에 저장한 후 
짝수 번째 입력된 값의 합과 
홀수 번째 입력된 값의 평균을 출력하는 프로그램을 작성하시오.

평균은 반올림하여 소수첫째자리까지 출력한다.

입력 예
95 100 88 65 76 89 58 93 77 99

출력 예
sum : 446
avg : 78.8

*/
int main()
{
	int number[10]; // 정수 10개를 담기 위한 배열

	for (int i = 0; i < 10; i++) {
		scanf("%d", &number[i]);
	}

	/*
	// 짝수번째의 합
	int sum = 0;
	for (int i = 1; i < 10; i += 2) {
	sum += number[i];
	}
	printf("sum : %d\n", sum);

	//  홀수번째의 합
	sum = 0;
	for (int i = 0; i < 10; i += 2) {
	sum += number[i];
	}
	printf("avg : %.1f\n", sum / 5.0);
	*/


	int even = 0, odd = 0;
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			// 홀수번째
			odd += number[i];
		}
		else {
			// 짝수번째
			even += number[i];
		}
	}
	printf("sum : %d\n", even);
	printf("avg : %.1f\n", odd / 5.0);


	getchar();
	printf("\nENTER 를 누르면 종료됩니다\n");
	getchar();
	return 0;
} // end main()
#include <stdio.h>
#pragma warning(disable:4996)
/*
10 15 36 99 100 19 46 88 87 13
*/

int main()
{
	// 10개의 정수 입력받기

	int n;
	int mul3 = 0, mul5 = 0;   // 3의 배수의 개수, 5의 배수의 개수
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		if (n % 3 == 0) mul3++;
		if (n % 5 == 0) mul5++;
	}

	printf("Multiples of 3 : %d\n", mul3);
	printf("Multiples of 5 : %d\n", mul5);

	getchar();

	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
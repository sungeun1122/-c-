#include <stdio.h>
#pragma warning(disable:4996)

/*
142 : 반복제어문3 - 형성평가3
자연수 n을 입력받아 "출력 예"와 같이 출력되는 프로그램을 작성하시오.
주의! '*'과 '*'사이에 공백이 없고 줄사이에도 빈줄이 없다.

입력 예
3

출력 예
*
**
***
**
*

*/

int main()
{
	int n;
	scanf("%d", &n);

	// 증가방향
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	// 감소 방향
	for (int i = n; i > 1; i--) {
		for (int j = 0; j < i - 1; j++) {
			printf("*");
		}
		printf("\n");
	}

	getchar();
	getchar();
	return 0;
}
#include <stdio.h>

int main()
{
	// 구구단 2단 출력
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ..
	// 2 x 9 = 18
	// TODO

	int i;
	for (i = 1; i <= 9; i++)
	{
		printf("2 x %d = %d\n", i, i * 2);
	}

	printf("-- 순환문 + 조건문 ---");
	// 1 ~ 10 중 홀수만 음수로 바꾸어 출력하기
	// -1 2 -3 4 -5 6 -7 8 -9 10
	
	// TODO



	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
#include <stdio.h>

/*
* 조건식이 '참' 인 동안 while 블럭 반복
*
*	while(조건식){
*		..
*		..
*	}
*
*/

int main()
{
	int i = 0;
	while (i < 5)
	{
		printf("i = %d\n", i);
		i++;
	}

	// for <--> while 구문 100% 전환가능


	// while 문으로 구구단 2단 출력
	// 2 x 1 = 2
	// 2 x 2 = 4
	// ..
	// 2 x 9 = 18
	
	i = 1;
	while (i <= 9)
	{
		printf("2 x %d = %d\n", i, i * 2);
		i++;
	}


	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
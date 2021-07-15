#include <stdio.h>

#include "myfunction.h"

int main()
{
	printf("MAX = %d\n", MAX);

	Data i = 3, j = 4;
	
	printf("power() 결과 : %d\n", power(i, j));
	printf("doubleUp() 결과 : %.1f\n", doubleUp(j));

	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
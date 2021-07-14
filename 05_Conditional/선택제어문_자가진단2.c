#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int height;  
	int weight; 

	scanf("%d %d", &height, &weight);

	int obesity = weight + 100 - height; // 비만수치

	printf("%d\n", obesity);

	if (obesity > 0)
		printf("Obesity");

	//getchar();
	//printf("\nENTER 를 누르면 종료합니다\n");
	//getchar();
	return 0;
}
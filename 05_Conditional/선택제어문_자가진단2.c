#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	int height;  
	int weight; 

	scanf("%d %d", &height, &weight);

	int obesity = weight + 100 - height; // �񸸼�ġ

	printf("%d\n", obesity);

	if (obesity > 0)
		printf("Obesity");

	//getchar();
	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}
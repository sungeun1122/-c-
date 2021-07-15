#include <stdio.h>
#pragma warning(disable:4996)

void drawSquare(int aa);  // 선언

int main()
{
	int n;
	scanf("%d", &n);
	drawSquare(n);  // 호출
	getchar();

	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}

void drawSquare(int n)  // 정의
{
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", i + j * i);
		}
		printf("\n");
	}
}
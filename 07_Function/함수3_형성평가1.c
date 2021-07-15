#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

void func(int n) {
	if (n < 1) return;  // 종료조건

	func(n / 2);  // 재귀호출
	printf("%d ", n);
}

int main()
{
	int n;
	scanf("%d", &n);

	func(n);

	//getchar();
	//printf("\nENTER 를 누르면 종료합니다\n");
	//getchar();
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

void drawSquare(int aa);  // ����

int main()
{
	int n;
	scanf("%d", &n);
	drawSquare(n);  // ȣ��
	getchar();

	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}

void drawSquare(int n)  // ����
{
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", i + j * i);
		}
		printf("\n");
	}
}
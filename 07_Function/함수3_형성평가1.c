#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

void func(int n) {
	if (n < 1) return;  // ��������

	func(n / 2);  // ���ȣ��
	printf("%d ", n);
}

int main()
{
	int n;
	scanf("%d", &n);

	func(n);

	//getchar();
	//printf("\nENTER �� ������ �����մϴ�\n");
	//getchar();
	return 0;
}
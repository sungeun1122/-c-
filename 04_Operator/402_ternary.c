#include <stdio.h>

// ���� ������
// ( ���ǽ� ) ? (���ΰ�� ���) : (������ ��� ���)

int main()
{
	int result;
	result = 10 > 3 ? 200 : -100;
	printf("result = %d\n", result); // 200

	result = 10 < 3 ? 200 : -100;
	printf("result = %d\n", result);  // -100

	int a = 45;
	int b = 60;
	// a �� b �� ���̰� (difference) ��?
	int diff = a > b ? a - b : b - a;
	printf("diff = %d\n", diff);

	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

/*

http://jungol.co.kr/bbs/board.php?bo_table=pbank&wr_id=199&sca=1090
10���� ������ �Է¹޾� �迭�� ������ �� 
¦�� ��° �Էµ� ���� �հ� 
Ȧ�� ��° �Էµ� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

����� �ݿø��Ͽ� �Ҽ�ù°�ڸ����� ����Ѵ�.

�Է� ��
95 100 88 65 76 89 58 93 77 99

��� ��
sum : 446
avg : 78.8

*/
int main()
{
	int number[10]; // ���� 10���� ��� ���� �迭

	for (int i = 0; i < 10; i++) {
		scanf("%d", &number[i]);
	}

	/*
	// ¦����°�� ��
	int sum = 0;
	for (int i = 1; i < 10; i += 2) {
	sum += number[i];
	}
	printf("sum : %d\n", sum);

	//  Ȧ����°�� ��
	sum = 0;
	for (int i = 0; i < 10; i += 2) {
	sum += number[i];
	}
	printf("avg : %.1f\n", sum / 5.0);
	*/


	int even = 0, odd = 0;
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			// Ȧ����°
			odd += number[i];
		}
		else {
			// ¦����°
			even += number[i];
		}
	}
	printf("sum : %d\n", even);
	printf("avg : %.1f\n", odd / 5.0);


	getchar();
	printf("\nENTER �� ������ ����˴ϴ�\n");
	getchar();
	return 0;
} // end main()
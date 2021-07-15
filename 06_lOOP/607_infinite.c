#include <stdio.h>
#pragma warning(disable:4996)
/*

*/

int main()
{
	// for 무한루프
	// for (;;) {..}

	// while 무한루프
	//while (1) { ..}

	// 사용자로부터 정수를 계속 입력받다가
	// 0 이 입력되면 종료하고.
	// 그동안 입력받았던 점수의 '개수' 와 '합' 을 출력하세요.

	int count = 0;  // 개수
	int sum = 0;  // 합계

	while (1) {  // 무한루프
		int n;
		scanf("%d", &n);

		// 무한루프 종료조건
		if (n == 0) {
			getchar();
			break;
		}

		// 종료상황 아니면
		count++;  // 개수증가
		sum += n;  // 누적합산
	}

	printf("개수: %d개\n", count);
	printf("합: %d\n", sum);


	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
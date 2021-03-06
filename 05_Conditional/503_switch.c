#include <stdio.h>

/*
* switch(정수)
* {
* case n1:
*	...
*	break;
* case n2:
*	...
*	break;
*
* ...
* default:
*	...
*	break;
*}
*/
int main()
{
	int n = 1;

	switch (n) // switch(정수)
	{
	case 1:   // 위 정수 값이 1 인 경우 아래 코드 수행
		printf("n 값은 1 입니다\n");
		break;  // switch 블럭 종료

	case 2:   // case 문은 복수개 가능
		printf("n 값은 2 입니다\n");
		break;
	case 3:
		printf("n 값은 3 입니다\n");
		break;

	default:  // 위 모든 case 에 해당하지 않는 값인 경우
		printf("해당 값이 아닙니다\n");
	}

	// TODO :  n값이 짝수이면 "짝수입니다" 출력
	// 홀수이면 "홀수입니다 " 출력
	// switch ~ case 문 사용
	n = 34;

	switch (n % 2)
	{
	case 0:
		printf("짝수입니다\n");
		break;
	case 1:
		printf("홀수입니다\n");
		break;
	}

	// 4점대 -> A
	// 3점대 -> B
	// 2점대 -> C
	// 1점대 -> D
	// 그 이하 -> F
	double point = 0.7;

	//  (int)3.14 => 3 

	switch ((int)point)   // (int)실수 => int 타입변환.  소숫점 제거됨.
	{
	case 4: // 4.0 <= point < 5.0
		printf("A학점\n"); break;
	case 3:
		printf("B학점\n"); break;
	case 2:
		printf("C학점\n"); break;
	case 1:
		printf("D학점\n"); break;
	default:
		printf("이번 학기는 글렀어..\n");
	}



	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
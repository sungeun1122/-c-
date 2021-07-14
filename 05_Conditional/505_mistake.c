#include <stdio.h>

#define GOOD 1
#define BAD 0

int main()
{
	if (10 < 4);  // 주의! 조건문/순환문 뒤에 ; 을 바로 붙이는 실수 하지 않기!
	{
		printf("실행되면 안되요\n");
	}

	int mind = BAD;

	if (mind = GOOD)   // 비교연산자 ==  vs. 대입연산자 =   
	{
		printf("착합니다\n");
	}
	else
	{
		printf("나쁩니다\n");
	}



	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
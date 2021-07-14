#include <stdio.h>
#pragma warning(disable:4996)


int main()
{
	// char 를 입력받을때 주의
	char ch;
	int a, b;

	printf("문자 하나 입력 : ");
	scanf("%c", &ch);
	printf("입력한 문자는 = %c\n", ch);

	printf("정수 하나 입력 : ");
	scanf("%d", &a);
	printf("또 다시 문자 하나 입력 : ");

	getchar();  // 버퍼에 남아있는 줄바꿈 문자 제거

	scanf("%c", &ch);

	

	printf("a = %d, ch = %c\n", a, ch);

	getchar();
	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}

/*
	입력버퍼비우기 참고

	1. while(getchar()!= '\n');

	2. fflush(stdin):  vs에서만 사용

	3. __fpurge(stdin) : 리눅스 환경에서만 사용
*/
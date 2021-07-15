#include <stdio.h>

/*
	함수 호출
	함수 리턴
*/

void bbb() {
	printf("5. bbb() 함수 시작\n");

	printf("6. bbb() 함수 리턴\n");
}

void aaa() {
	printf("3. aaa() 함수 시작\n");
	bbb();   // aaa() 에서 bbb() 호출
	printf("4. aaa() 함수 리턴\n");
}

int main()
{
	printf("1. main() 함수 시작\n");
	aaa();  // main() 에서 aaa() 호출
	printf("2. main() 함수 리턴\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}

// 함수 호출순서
// main() -> aaa() -> bbb()

// 함수 리턴순서 : 호출순서의 역방향
// bbb() -> aaa() -> main()
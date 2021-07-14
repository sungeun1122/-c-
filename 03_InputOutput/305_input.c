#include <stdio.h>
#pragma warning(disable:4996)
/*
	문자열 입력
*/

int main()
{
	char name[20];  // 최대 20문자 담을수 있는 문자열 name

	printf("이름을 입력하세요 : ");
	scanf("%s", name); // 문자열 입력받을때는 & 붙이지 마세요.
	// ※ 일단 띄어쓰기 없이 입력받아야 한다.
	// %s : 공백없는 문자열 입력
	printf("너의 이름은 %s\n", name);

	int age;
	printf("나이를 입력하세요 : ");
	scanf("%d", &age);

	char nick[20];
	printf("별명도 입력하세요 : ");
	scanf("%s", nick);
	printf("나이: %d, 별명: %s\n", age, nick);

	getchar();

	// 한줄 입력
	// gets()
	printf("full-name 을 입력하세요:");
	gets(name);  // 공백 포함해서 ENTER 입력될때까지 한줄 입력
	printf("이름은 %s 입니다\n", name);

	getchar();
	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
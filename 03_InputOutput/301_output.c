#include <stdio.h>

/*

*/

int main()
{
	printf("기본 출력(output)\n");
	// printf : print formatted (서식화된 출력)

	// "문자열" 출력
	printf("Hello World\n");

	// 문자열 (string) 선언
	// 최대 20개의 문자로 구성된 문자열을 담을수 있는 str1 선언
	char str1[20] = "C Language";  // 10문자로 구성된 문자열. 공백도 하나의 문자!

	// %s : 문자열 출력하는 서식지정자
	printf("str1 = %s\n", str1);

	char str2[] = "Java Language"; // 자동적으로 초기화, 문자열의 문자 개수만큼의 크기로 생성
	printf("str2 = %s\n", str2);

	char *str3 = "Python Language";  // 포인터 사용
	printf("str3 = %s\n", str3);




	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
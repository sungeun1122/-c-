#include <stdio.h>

/*
*	배열의 크기 (size) : 배열의 용량크기 (byte)
*	배열의 길이 (length) : 배열원소의 개수
*/

int main()
{
	// sizeof() 연산자
	// 데이터의 크기를 byte (정수) 로 리턴
	printf("%d\n", sizeof(100));  // 정수리터럴 의 size, 
	short s = 100;
	printf("%d\n", sizeof(s));   // 변수의 size
	printf("%d\n", sizeof(double));  // 타입명의 size도 가능!

	int arr[3];
	printf("sizeof(배열) : %d\n", sizeof(arr));  // 배열이름으로 배열크기 계산 가능.
	printf("arr[0] 의 size : %d\n", sizeof(arr[0]));  // 배열 원소의 크기

	// 배열의 길이 구하는 공식
	// sizeof(배열이름) / sizeof(배열원소타입)
	// sizeof(배열이름) / sizeof(배열의 첫번째 원소)

	printf("arr 의 length = %d\n", sizeof(arr) / sizeof(int));
	printf("arr 의 length = %d\n", sizeof(arr) / sizeof(arr[0]));

	//int arr2[0];  // C언어는 길이 0짜리 배열 선언 불가!


	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
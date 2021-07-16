#include <stdio.h>

/*
*  함수호출시 매개변수 전달 방식에 따라
*  1. Call By Value (값에 의한 호출)
*     : 기본적으로 매개변수 값의 '복사' 발생
*     : 호출한 원본은 변화 없다.
*  2. Call By Reference (참조에 의한 호출)
*     : 호출시 포인터(주소)를 함수에 넘겨준다
*	  : 기본적으로 매개변수(포인터, 주소) 값의 '복사' 발생
*     : 호출한 원본의 변화 발생
*/

void inc1(int n) {
	n += 1;
	printf("inc1() n = %d\n", n);
}

void inc2(int *p) {
	*p += 1;
	printf("inc2() *p = %d\n", *p);
}

// Call By Reference 방식으로 주소값을 넘기되
// 원본의 변화를 발생시키지 않도록 하려면.
void inc3(const int *p) {   // const int 를 가리키는 포인터 p
	//*p += 1;  //  에러, 쓰기 불가.  p가 가리키는 곳의 값은 변경 불가
	printf("inc3() *p => %d\n", *p);  // 읽기만 가능.

	int a = 100;
	p = &a;  // p 값 변화 가능.
	printf("inc3() *p => %d\n", *p);
}

void inc4(int * const p) {  // 포인터 상수
	*p += 1;  // p가 가리키는 곳의 값은 변경 가능
	printf("inc3() *p => %d\n", *p);

	int a = 100;
	//p = &a;  // p값 변경 불가
}



int main()
{
	int n = 10;
	inc1(n);  // 함수 호출.
	printf("inc1() 리턴후 n = %d\n", n);  // 호출한쪽의 원본 n 변화 없다.

	inc2(&n); // 호출시 주소를 넘김
	printf("inc2() 리턴후 n = %d\n", n);  // 호출한쪽의 원본 n 변화 발생

	inc3(&n);


	int *p1;  // 포인터 변수
	
	const int *p2;  // 상수에 대한 포인터 변수
	int const *p22; // 위와 동일

	int * const p3;  // 포인터 상수
	const int * const p4;   // 상수에 대한 포인터 상수


	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
#include <stdio.h>

/*
	pointer to pointer
*/

int main()
{
	int num1 = 10;
	int *p = NULL; // int 를 가리키기 위한 포인터, 초깃값 NULL (아무주소값도 가리키지 않는, 0값)
	int **pp = NULL;  // int* 를 가리키기 위한 포인터, 2차원 포인터라고도 함

	p = &num1;
	pp = &p;  // 포인터 p 의 주소를 담은 pp

	printf("%d %p\n", num1, p);

	printf("%d %d %p %d\n", num1, *p, *pp, **pp);

	// p 의 타입은? -> int*
	// *p 의 타입은? -> int

	// pp 의 타입은? -> int**
	// *pp 의 타입은? -> int*
	// **pp 의 타입은? -> int

	//printf("%d\n", ***pp);  // **pp 는 int 다.  참조연산자 * 사용 불가


	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
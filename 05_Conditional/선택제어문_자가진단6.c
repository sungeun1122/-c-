#include <stdio.h>
#pragma warning(disable:4996)

/*
남자는 'M' 여자는 'F'로 나타내기로 하고
18세 이상을 성인이라고 하자.

성별('M', 'F')과 나이를 입력받아
"MAN"(성인남자), "WOMAN"(성인여자),
"BOY"(미성년남자), "GIRL"(미성년여자)을 구분하여 출력하는 프로그램을 작성하시오.
*/

int main()
{
	char gender;
	int age;

	scanf("%c", &gender);
	scanf("%d", &age);

	if (gender == 'M') {
		// 남자
		if (age >= 18) {
			printf("MAN");
		}
		else {
			printf("BOY");
		}
	}
	else if (gender == 'F') {
		// 여자
		if (age >= 18) {
			printf("WOMAN");
		}
		else {
			printf("GIRL");
		}
	}

	printf("\n--------------------------------\n");

	if (gender == 'M' && age >= 18) printf("MAN");
	else if (gender == 'M' && age < 18) printf("BOY");
	else if (gender == 'F' && age >= 18) printf("WOMAN");
	else if (gender == 'F' && age < 18) printf("GIRL");


	getchar();
	printf("\nENTER 를 누르면 종료합니다\n");
	getchar();
	return 0;
}
#include <stdio.h>
#pragma warning(disable:4996)

/*
���ڴ� 'M' ���ڴ� 'F'�� ��Ÿ����� �ϰ�
18�� �̻��� �����̶�� ����.

����('M', 'F')�� ���̸� �Է¹޾�
"MAN"(���γ���), "WOMAN"(���ο���),
"BOY"(�̼��Ⳳ��), "GIRL"(�̼��⿩��)�� �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

int main()
{
	char gender;
	int age;

	scanf("%c", &gender);
	scanf("%d", &age);

	if (gender == 'M') {
		// ����
		if (age >= 18) {
			printf("MAN");
		}
		else {
			printf("BOY");
		}
	}
	else if (gender == 'F') {
		// ����
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
	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
#include <stdio.h>

#define GOOD 1
#define BAD 0

int main()
{
	if (10 < 4);  // ����! ���ǹ�/��ȯ�� �ڿ� ; �� �ٷ� ���̴� �Ǽ� ���� �ʱ�!
	{
		printf("����Ǹ� �ȵǿ�\n");
	}

	int mind = BAD;

	if (mind = GOOD)   // �񱳿����� ==  vs. ���Կ����� =   
	{
		printf("���մϴ�\n");
	}
	else
	{
		printf("���޴ϴ�\n");
	}



	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
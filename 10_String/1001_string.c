#include <stdio.h>
#include <string.h>

/*
*	���ڿ��� ����(������ ����)�� ��ȯ
*		strlen(���ڿ�������);
*		strlen(���ڹ迭);
*
*	���ڿ� �� ����� ��ȯ
*		strcmp(���ڿ�1, ���ڿ�2);
*		int strcmp(char const *_Str1, char const *_Str2);
*
*		-1: ASCII �ڵ� �������� ���ڿ�2(s2)�� Ŭ ��
*		0: ASCII �ڵ� �������� �� ���ڿ��� ���� ��
*		1: ASCII �ڵ� �������� ���ڿ�1(s1)�� Ŭ ��
*
*	���ڿ� ����
*		strcpy(����ڿ�, �������ڿ�);
*		char *strcpy(char *_Dest, char const *_Source);
*		����ڿ��� �����͸� ��ȯ
*
*	���ڿ� ���̱�
*		strcat(�������ڿ�, ���Ϲ��ڿ�);
*		char *strcat(char *_Destination, char const *_Source);
*		���� ���ڿ��� �����͸� ��ȯ
*
*	���ڿ� �ȿ��� '����'�� �˻�
*		strchr(����ڿ�, �˻��ҹ���);
*		char *strchr(char * const _String, int const _Ch);
*		���ڸ� ã������ ���ڷ� �����ϴ� ���ڿ��� �����͸� ��ȯ, ���ڰ� ������ NULL�� ��ȯ
*
*	���ڿ� �ȿ��� '���ڿ�'�� �˻�
*		strstr(����ڿ�, �˻��ҹ��ڿ�);
*		char *strstr(char * const _String, char const * const _SubString);
*		���ڿ��� ã������ ���ڿ��� �����ϴ� ���ڿ��� �����͸� ��ȯ, ���ڿ��� ������ NULL�� ��ȯ
*
*  ���ڿ� ��ҹ��� ��ȯ
*		strupr(����ڿ�)  : �־��� ����ڿ��� ���� �빮�ڷ� ��ȯ
*		strlwr(����ڿ�)  : �־��� ����ڿ��� ���� �ҹ��ڷ� ��ȯ
*       �������ڿ� ��ȭ�� (����!)
*/


int main()
{
	char *s1 = "Hello";    // ������ s1 �� ���ڿ� "Hello" �� �ּ� ����
	char s2[10] = "Hello";  // ���̰� 10�� char[] �� �����ϰ� ���ڿ��� �ʱ�ȭ

	printf("s1 = %s, s2 = %s\n", s1, s2);

	s2[0] = 'K';
	printf("s2 = %s\n", s2);

	//s1[0] = 'K';  // ����! , "Hello" �� ���ͷ� ���.  ���� �Ұ�

	// ���ڿ��� ���� strlen()
	{ 
		printf("%d\n", strlen(s1));
		printf("%d\n", strlen(s2));
	}

	// ���ڿ� �� strcmp()
	{
		int ret = strcmp(s1, s2);  // "Hello" < "Kello"
		printf("%d\n", ret);  // -1

		if (strcmp(s1, s2)) {
			printf("%s �� %s �� �ٸ��ϴ�\n", s1, s2);
		}
		else {
			printf("%s �� %s �� �����ϴ�\n", s1, s2);
		}

		printf("%d\n", strcmp("aaa", "aaa"));  // 0
		printf("%d\n", strcmp("aab", "aaa"));  // 1
		printf("%d\n", strcmp("aab", "aac"));  // -1
		printf("%d\n", strcmp("aAaA", "AaAa"));  // 1
	}

	// ���ڿ� ���� strcpy()
	{
		char s1[10] = "Hello";
		char s2[10];

		//s2 = "Hello";  // �ȵǿ�..

		printf("strcpy() �� s2 = %s\n", s2);

		strcpy(s2, s1);  // s1 �� ���ڿ��� s2 �� ����
		printf("strcpy() �� s2 = %s\n", s2);
	}

	{
		// ����
		char *s1 = "Hello";  // ���ͷ� ����� ����Ű�� ������ s1, s2
		char *s2 = "";

		// strcpy(s2, s1);  // ����
	}

	// ���ڿ� ���� strcat()  string concatenation
	{
		char s1[10] = "world";
		char s2[20] = "Hello";

		printf("strcat() ������ s2 = %s\n", s2);

		strcat(s2, s1);  // s2 �ڿ� s1�� ����

		printf("strcat() ������ s2 = %s\n", s2);

	}

	//  "���ڿ�" �ȿ��� '����'�� �˻� strchr()
	{
		char s1[30] = "A Garden Diary";
		char *ptr = strchr(s1, 'a');

		if (ptr) {
			printf("%d ��°���� ã�Ҵ�\n", ptr - s1);
		}
		else {
			printf("����\n");
		}

		printf("ptr = %s\n", ptr);

		while (ptr != NULL)  // ���̻� �˻��� '����' �� ���������� �ݺ� �˻�
		{
			printf("%d ��°���� �߰� %s\n", ptr - s1, ptr);
			ptr = strchr(ptr + 1, 'a');  // �߰��� �������� �ٽ� �˻�
		}

	}


	// ���ڿ� �ȿ��� ���ڿ��� �˻� strstr()
	{
		char s1[30] = "A Garden Diary";

		char *ptr = strstr(s1, "den");  // ���ڿ� s1 ���� "den" �� �˻�

		if (ptr) {
			printf("strstr() �߰� %d��°, %s\n", ptr - s1, ptr);
		}
		else {
			printf("strstr() �߰߸���\n");
		}

	}

	// ���ڿ� ��ҹ��� ��ȯ strupr(), strlwr()
	{
		char s1[30] = "A Garden Diary";
		printf("strupr() => %s, s1 => %s\n", strupr(s1), s1);
		printf("strlwr() => %s, s1 => %s\n", strlwr(s1), s1);
	}



	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
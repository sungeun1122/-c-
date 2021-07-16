#include <stdio.h>

/* �迭�� ���ڿ�(string)
*	 - C��� ���� "���ڿ�" �� ��ü�� 'char [] �迭' �̴�
*	 - C����� "���ڿ�"��
*		  ���� '\0' (null ����) �� ������ 'char [] �迭' �̴�
*/
int main()
{
	char str1[20] = "nice";

	printf("str1 = %s\n", str1); // %s -> char�迭���� '\0' ���������� ���
	// str1 Ÿ����? => char[]
	// str1[0] Ÿ����? => char

	for(int i = 0; i < 4; i++)
		printf("str1[%d] = %c\n", i, str1[i]);

	//char str2[] = {'n', 'i', 'c', 'e'};  <-- \0 �� ����...
	char str2[] = { 'n', 'i', 'c', 'e', '\0' };
	printf("str2 = %s\n", str2);

	char str3[] = "nice";  // str3 �� ���̴� 5

	printf("%d\n", sizeof(str3));

	str1[0] = 'D';
	printf("str1 = %s\n", str1);

	str2[4] = '#'; // ���ڿ� �ǳ��� '\0' ���� ���� �ϸ�, %s ��½� �����Ⱚ ��µȴ�
	printf("str2 = %s\n", str2);

	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
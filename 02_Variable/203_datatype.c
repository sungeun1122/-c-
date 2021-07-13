#include <stdio.h>

/*
*	C����� ������ Ÿ��
*
*	 char : 1byte, �����ϳ�(����)  8 bit   => 256
*	 short : 2byte  ����          16 bit  => 65536
*	 int  : 4byte   ����          32 bit  => 42��?
*	 long : 4byte   ���� (�ý��۸��� �ٸ�) 32 bit
*	 float : 4byte  �Ǽ�          32 bit
*	 double : 8byte �Ǽ�          64 bit
*
*/

int main()
{
	printf("������ Ÿ��\n");

	// ����Ÿ�� ����
	int i = 0;   
	int a = 100, b = 200, c = 300;

	short s1, s2, s3, s4 = 300;
	long l1, l2 = 10000000, l3;

	char c1, c2 = 100;

	// ����Ÿ�� ����
	char ch1;  // 1byte (8bit), 256�� ǥ�� ������ �뷮
	ch1 = 'a'; // 'a' ������ �ڵ尪(����)�� ch1 �� ����
				// char �����ϳ� --> Ȧ����ǥ ��� 

	printf("ch1 = %d\n", ch1);  // 'a' �� �ڵ尪 => 97
	printf("ch1 = %c\n", ch1);  // %c �� ���� (�ϳ�) �� ���
	printf("%c\n", 98);   // 'b' => 98
	printf("%c\n", ch1 + 2);  // 'c' => 99

	// 1. bible
	// 2. able
	// 3. cable
	// 2, 1, 3

	// 1. aaAA
	// 2. AaAa
	// 3. AAaa
	// 4. aAaA
	ch1 = 'A';
	printf("ch1 = %d, %c\n", ch1, ch1);  // 'A' �� �ڵ尪 65

	// printf�� ���˹��ڿ� �ȿ� ���� ����������(format specifier) ��
	// %d : 10���� ������ ���
	// %c : ���ڷ� ���
	// %f : �Ǽ��� ���
	// %x : 16���� ������ ���
	// %% : % ���

	printf("%d, %x, %c\n", 65, 65, 65);

	{
		// ����Ÿ��, �뷮�� ����
		// 1byte / 8bit = 2�� 8�� = 256��(����)
		//       0 ~ 255 ���� ������ �ִ� �뷮

		// char : -128 ~ +127
		// short : -32768 ~ +32767
		// int : -2,147,483,648~ +2,147,483,647

		char ch2 = 127;
		printf("ch2 = %d\n", ch2);

		ch2 = 128;
		printf("ch2 = %d\n", ch2);

		ch2 = 129;
		printf("ch2 = %d\n", ch2);

		ch2 = 200;
		printf("ch2 = %d\n", ch2);  // -56

		// ����Ÿ���� ������ �����÷ο�(overflow), ����÷ο�(underflow) �߻�
		// https://dojang.io/pluginfile.php/75/mod_page/content/34/unit7-2.png
	}

	{
		// signed(��ȣ�ִ�) vs. unsigned(��ȣ����) Ÿ��
		signed char ch1 = 200;  // char ch1 �� ����,  signed �Ϲ������� ����
		unsigned char ch2 = 200;  // 0 ~ +255

		printf("ch1 = %d\n", ch1);
		printf("ch2 = %d\n", ch2);

		unsigned short s2;  // 0 ~ 65535
		unsigned int i2;    // 0 ~ 4,294,967,295

		// �� ���� �뷮�� ������ ������ Ÿ����? ==> �뷮 ==> ���.
		// '�г�' ������ Ÿ��?  4byte int ??
		// �л��� 100�� => 100 * 4 = 400 byte
	}

	{
		// �Ǽ�Ÿ��
		float f1 = 3.141592;  // 4byte
		double d1 = 3.141592;  // 8byte

		printf("f1 = %f\n", f1); 
		printf("d1 = %f\n", d1);

		printf("f1 = %.2f\n", f1);  // %.2f �Ҽ��� 2�ڸ����� ��� (���� �ݿø�)
		printf("d1 = %.4f\n", d1);
	}

	{
		// �Ǽ� Ÿ�Կ����� �뷮�� ����
		// ���е�(precision)�� ���̰� �ִ�
		// float : �Ҽ��� 6 ~ 9 �ڸ�
		// double : �Ҽ��� 15 ~ 18�ڸ�
		float f2 = 0.0123456789;
		double d2 = 0.0123456789;

		// %f �� ����ϸ� �⺻������ �Ҽ��� 6�ڸ����� ���
		printf("f2 = %f, d2 = %f\n", f2, d2);

		printf("f2 = %.10f, d2 = %.10f\n", f2, d2);

	}




	getchar();
	return 0;
}
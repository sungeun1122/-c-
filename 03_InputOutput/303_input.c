#include <stdio.h>
#pragma warning(disable:4996)

/*

*/

int main()
{
	float height, weight;
	printf("Ű�� �Է��ϼ���(cm) : ");  
	scanf("%f", &height); // %f, Ű����κ��� �Ǽ� �Է¹޾Ƽ�  float ������ ����
	printf("ü���� �Է��ϼ���(kg) : ");
	scanf("%f", &weight);

	printf("Ű: %.1fcm ü��: %.1fkg\n", height, weight);

	double d1;
	printf("�Ǽ��� �Է��ϼ��� : ");
	//scanf("%f", &d1);  // double Ÿ�� �Է¹������� %lf ���
	scanf("%lf", &d1);
	printf("�Է��Ͻ� �Ǽ��� %.12f �Դϴ�\n", d1);


	getchar();
	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
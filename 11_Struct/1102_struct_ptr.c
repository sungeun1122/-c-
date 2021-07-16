#include <stdio.h>

// person ����ü ����
struct person {
	char name[20]; // �̸�
	int age;       // ����
	double weight; // ������
};

// typedef ���� ������ ���
typedef struct person PS;

typedef struct _person {
	char name[20]; // �̸�
	int age;       // ����
	double weight; // ������

} Person;

char *Fmt = "�̸�:%s, ����:%d, ������:%.1f\n";

void printPerson(Person *p)
{
	printf(Fmt, p->name, p->age, p->weight);
}

int main()
{
	struct person p;
	PS p1;
	Person p2, p3 = {"�丣", 100, 90.44};

	// ����ü size
	printf("%d bytes\n", sizeof(Person));  // 32 <-- �ϴ�, ��� �´´�.

	// ����ü�� ���� ������
	Person *ptr = &p3;



	printf(Fmt, p3.name, p3.age, p3.weight);
	printf(Fmt, (*ptr).name, (*ptr).age, (*ptr).weight);
	printf(Fmt, ptr->name, ptr->age, ptr->weight);


	printPerson(&p3);

	printf("\nENTER �� ������ �����մϴ�\n");
	getchar();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[16] = { 0 };
	int age;

	printf("�̸��� ���̸� �������� �����Ͽ� �Է��ϼ���.\r\n");
	scanf("%s%d", name, &age);

	printf("�̸�: %s\r\n����: %d", name, age);
}

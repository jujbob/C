#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char name[16] = { 0 };
	int age;

	printf("�̸��� ������?\r\n");
	scanf("%s", name);

	printf("���̰� ��� �ǽ���?\r\n");
	scanf("%d", &age);

	printf("�̸�: %s\r\n����: %d", name, age);
}

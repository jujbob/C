#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	printf("���̸� �Է��ϼ���.\r\n");
	printf("�̼����ڸ� 0, �����̸� 1�� ���\r\n");
	scanf("%d", &age);
	printf("���: %d", age >= 20);
}

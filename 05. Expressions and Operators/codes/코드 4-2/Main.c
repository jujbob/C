#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	printf("���ڸ� �Է��ϼ���.\r\n");
	printf("2�� ����� 1, �ƴϸ� 0�� ���\r\n");
	scanf("%d", &a);
	printf("���: %d", a % 2 == 0);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("������ �Է��ϼ���.\r\n");

	scanf("%d", &n);
	printf("�� ��° ��Ʈ: %d", (n & 0b100) >> 2);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, r1, r2, r3;

	printf("�� �ڸ� �ڿ����� �Է��ϼ���.\r\n");
	scanf("%d", &a);

	r1 = a / 100;
	r2 = (a % 100) / 10;
	r3 = (a % 10);

	printf("%d, %d, %d", r1, r2, r3);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int multiply(int i, int j)
{
	return i * j;
}

int main()
{
	int a;
	int b;
	printf("�� ������ �������� �����Ͽ� �Է��ϼ���.\r\n");
	
	scanf("%d%d", &a, &b);

	int c = multiply(a, b);
	printf("�� ���� ���� %d�Դϴ�.", c);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Multiply(int a, int b)
{
	return a * b;
}

double Divide(int a, int b)
{
	if(!b)
		return 0.0;
	else
		return (double)a / b;
}

int main()
{
	int a, b;
	printf("�� ������ �������� �����Ͽ� �Է��ϼ���.\r\n");
	scanf("%d%d", &a, &b);

	printf("%d * %d = %d\r\n", a, b, Multiply(a, b));
	printf("%d / %d = %f", a, b, Divide(a, b));
}

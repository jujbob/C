#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Gaus(double x)
{
	int g = (int)x;
	g = x - g < 0 ? g - 1 : g;
	return g;
}

int main()
{
	double d;
	printf("�Ǽ��� �Է��ϼ���.\r\n");

	scanf("%lf", &d);
	printf("Gaus: %d", Gaus(d));
}

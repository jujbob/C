#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const double PI = 3.141592;
	double r;
	printf("�������� �Է��ϼ���.\r\n");

	scanf("%lf", &r);
	double len = 2 * PI * r;
	double area = PI * r * r;

	printf("�ѷ�: %f, ����: %f", len, area);
}

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
	printf("실수를 입력하세요.\r\n");

	scanf("%lf", &d);
	printf("Gaus: %d", Gaus(d));
}

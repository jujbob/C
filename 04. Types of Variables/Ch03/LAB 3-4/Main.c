#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const double PI = 3.141592;
	double r;
	printf("반지름을 입력하세요.\r\n");

	scanf("%lf", &r);
	double len = 2 * PI * r;
	double area = PI * r * r;

	printf("둘레: %f, 넓이: %f", len, area);
}

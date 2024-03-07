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
	printf("두 정수를 공백으로 구분하여 입력하세요.\r\n");
	
	scanf("%d%d", &a, &b);

	int c = multiply(a, b);
	printf("두 수의 곱은 %d입니다.", c);
}

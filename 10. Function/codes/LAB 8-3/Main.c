#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n)
{
	if(n == 1)
		return 1;

	return n * factorial(n - 1);
}

int main()
{
	int n;
	printf("정수를 입력하세요.\r\n");
	scanf("%d", &n);

	printf("n!: %d", factorial(n));
}

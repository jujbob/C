#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("정수를 입력하세요.\r\n");

	scanf("%d", &n);
	printf("세 번째 비트: %d", (n & 0b100) >> 2);
}

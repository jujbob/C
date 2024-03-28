#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	printf("숫자를 입력하세요.\r\n");
	printf("2의 배수면 1, 아니면 0을 출력\r\n");
	scanf("%d", &a);
	printf("결과: %d", a % 2 == 0);
}

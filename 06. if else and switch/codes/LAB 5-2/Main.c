#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("정수를 입력하세요.\r\n");
	scanf("%d", &n);

	if(n % 2)
		printf("홀수입니다.");

	if(!(n % 2))
		printf("짝수입니다.");
}

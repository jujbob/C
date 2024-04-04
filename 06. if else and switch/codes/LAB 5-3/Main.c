#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("정수를 입력하세요.\r\n");
	scanf("%d", &n);

	if(!(n % 2) && !(n % 3))
		printf("2와 3의 공배수입니다.");
	else if(!(n % 2))
		printf("2의 배수입니다.");
	else if(!(n % 3))
		printf("3의 배수입니다.");
	else
		printf("2와 3의 공배수가 아닙니다.");
}

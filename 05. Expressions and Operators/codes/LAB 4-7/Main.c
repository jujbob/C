#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("정수를 입력하세요.\r\n");
	
	scanf("%d", &n);
	n += n % 2 == 0 ? 2 : 1;
	printf("다음 짝수: %d", n);
}

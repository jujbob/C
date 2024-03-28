#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	printf("나이를 입력하세요.\r\n");
	printf("미성년자면 0, 성인이면 1을 출력\r\n");
	scanf("%d", &age);
	printf("결과: %d", age >= 20);
}

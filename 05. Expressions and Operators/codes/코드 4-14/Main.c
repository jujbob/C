#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	printf("나이를 입력하세요.\r\n");
	scanf("%d", &age);
	printf("%s", age < 20 ? "미성년자" : "성인");
}

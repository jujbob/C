#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int prime[] = { 2, 3, 5, 7, 11, 13, 17, 19 };
	int n;

	do
	{
		printf("20 이하 정수를 입력하세요.\r\n");
		scanf("%d", &n);
	}
	while(n > 20);

	for(int i = 0; i < 8; i++)
	{
		if(n == prime[i])
		{
			printf("소수입니다.");
			return 0;
		}
	}

	printf("소수가 아닙니다.");	
}

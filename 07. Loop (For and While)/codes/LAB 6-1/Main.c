#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(int count)
{
	if(count > 0)
	{
		printf("난생처음 ");
		Print(count - 1);
	}
}

int main()
{
	int n;
	printf("반복 횟수를 입력하세요!\r\n");
	scanf("%d", &n);

	Print(n);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Number = 0;

int SaveNumber(int n)
{
	int r = g_Number;
	g_Number = n;
	return r;
}

int main()
{
	int n;

	do
	{
		printf("보관할 수를 입력하세요 > ");
		scanf("%d", &n);
		
		printf("이전 보관된 수: %d\r\n", SaveNumber(n));
	} 
	while(n);
}

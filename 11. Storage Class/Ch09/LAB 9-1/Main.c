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
		printf("������ ���� �Է��ϼ��� > ");
		scanf("%d", &n);
		
		printf("���� ������ ��: %d\r\n", SaveNumber(n));
	} 
	while(n);
}

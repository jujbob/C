#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print(int count)
{
	if(count > 0)
	{
		printf("����ó�� ");
		Print(count - 1);
	}
}

int main()
{
	int n;
	printf("�ݺ� Ƚ���� �Է��ϼ���!\r\n");
	scanf("%d", &n);

	Print(n);
}

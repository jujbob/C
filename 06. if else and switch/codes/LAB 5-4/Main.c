#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("������ �Է��ϼ���!\r\n");
	scanf("%d", &n);

	int c = 0;
	if(n % 8 == 0)
			c = 8;
	else if(n % 4 == 0)
		c = 4;
	else if(n % 2 == 0)
		c = 2;

	switch(c)
	{
	case 8: printf("8�� ���, "); 
	case 4: printf("4�� ���, ");
	case 2: printf("2�� ���"); break;
	default: printf("2, 4, 8�� ��� �ƴ�");
	}
}

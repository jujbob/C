#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int prime[] = { 2, 3, 5, 7, 11, 13, 17, 19 };
	int n;

	do
	{
		printf("20 ���� ������ �Է��ϼ���.\r\n");
		scanf("%d", &n);
	}
	while(n > 20);

	for(int i = 0; i < 8; i++)
	{
		if(n == prime[i])
		{
			printf("�Ҽ��Դϴ�.");
			return 0;
		}
	}

	printf("�Ҽ��� �ƴմϴ�.");	
}

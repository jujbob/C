#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int Number;

	while(1)
	{
		printf("1������ 4������ ���ϴ� ��ȣ�� �Է��ϼ���! ");
		scanf("%d", &Number);

		if(Number > 4)
		{
			continue;
		}

		printf("������ ��ȣ�� %d�Դϴ�.", Number);
		break;
	}
}

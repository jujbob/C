#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year, month, day;

	while(1)
	{
		printf("�¾ �⵵�� �Է��ϼ��� > ");
		scanf("%d", &year);

		if(year > 2021)
			continue;
		else if(year <= 0)
			return 0;

		while(1)
		{
			printf("�¾ ���� �Է��ϼ��� > ");
			scanf("%d", &month);

			if(month > 12)
				continue;
			else if(month <= 0)
				return 0;

			while(1)
			{
				printf("�¾ ���� �Է��ϼ��� > ");
				scanf("%d", &day);

				if(day > 31)
					continue;
				else if(day <= 0)
					return 0;

				printf("Birthday: %d-%d-%d", year, month, day);
				return 0;
			}
		}
	}
}

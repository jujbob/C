#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int year, month, day;

	while(1)
	{
		printf("태어난 년도를 입력하세요 > ");
		scanf("%d", &year);

		if(year > 2021)
			continue;
		else if(year <= 0)
			return 0;

		while(1)
		{
			printf("태어난 월을 입력하세요 > ");
			scanf("%d", &month);

			if(month > 12)
				continue;
			else if(month <= 0)
				return 0;

			while(1)
			{
				printf("태어난 일을 입력하세요 > ");
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

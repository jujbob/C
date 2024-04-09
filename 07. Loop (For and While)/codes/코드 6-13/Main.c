#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int Number;

	while(1)
	{
		printf("1번부터 4번까지 원하는 번호를 입력하세요! ");
		scanf("%d", &Number);

		if(Number > 4)
		{
			continue;
		}

		printf("선택한 번호는 %d입니다.", Number);
		break;
	}
}

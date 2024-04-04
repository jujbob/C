#include <stdio.h>

int main()
{
	switch(1 + 1)
	{
	case 1: printf("1\r\n");	// case 2로 실행 흐름 분기
	case 2: printf("2\r\n");
			printf("2A\r\n");
	case 3: printf("3\r\n");
			{
				printf("3A\r\n");
				printf("3B\r\n");
			}
	default: printf("D");
	}
}

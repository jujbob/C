#include <stdio.h>

int main()
{
	for(int i = 2; i < 10; i++)	// 2단부터 9단까지
	{
		for(int j = 1; j < 10; j++)
			printf("%d * %d = %d\r\n", i, j, i * j);
		printf("\r\n");						// 단마다 줄 바꿈
	}
}

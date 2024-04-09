#include <stdio.h>

int main()
{
	for(int i = 2; i < 10; i++)	// for문 시작
	{
		int j = 1;
		while(1)									// while문 시작
		{
			printf("%d * %d = %d\r\n", i, j, i * j);
			j++;
			if(j > 9)
				break;								// while문만 탈출한다.
		}													// while문 끝

		printf("\r\n");
	}														// for문 끝
}

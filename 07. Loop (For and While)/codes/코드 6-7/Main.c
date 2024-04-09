#include <stdio.h>

int main()
{
	int i = 0;				// 초기화절
	int Sum = 0;

	while(i < 100)		// while문 시작
	{
		Sum = Sum + (i + 1);
		i++;						// 반복식
	}									// while문 끝

	printf("총합: %d", Sum);
}

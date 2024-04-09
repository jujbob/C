#include <stdio.h>

int main()
{
	int i = 0;				// 초기화절
	int Sum = 0;

	for( ; i < 100; )	// for문 시작
	{									// 명령문 시작
		Sum = Sum + (i  + 1);
		i++;						// 반복식
	}									// 명령문 끝, for문 끝

	printf("총합: %d", Sum);
}

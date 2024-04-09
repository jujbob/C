#include <stdio.h>

int main()
{
	int i = 0;		// 초기화절
	int Sum = 0;

	for(;;)				// for문 시작
	{
		Sum = Sum + (i + 1);
		i++;				// 반복식

		if(i > 99)
			break;		// for문 탈출
	}							// for문 끝

	printf("총합: %d", Sum);
}

#include <stdio.h>

int main()
{
	int i = 0;
	int Sum = 0;

	while(1)		// whie문 시작
	{
		Sum = Sum + (i + 1);
		i++;			// 반복식

		if(i > 99)
			break;	// while문 탈출
	}						// while문 끝

	printf("총합: %d", Sum);
}

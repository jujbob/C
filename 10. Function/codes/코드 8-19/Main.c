#include <stdio.h>

int Sum(int N)
{
	int result = 0;
	for(int i = 1; i <= N; i++)
	{
		result += i;
	}

	return result;
}

int RecursiveSum(int N)
{
	if(N == 1)
		return 1;											// 반환

	return N + RecursiveSum(N - 1); // 재귀 호출
}

int main()
{
	printf("Sum: %d\r\n", Sum(100));
	printf("RecursiveSum: %d", RecursiveSum(100));
}

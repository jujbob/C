#include <stdio.h>

int Sum(int from, int to)
{
	int sum = 0;
	for(int i = from; i <= to; i++)
		sum += i;

	return sum;
	printf("Complete!");	// Ãâ·Â ¾ÈµÊ
}

int main()
{
	int result = Sum(1, 100);
	printf("Sum: %d", result);
}

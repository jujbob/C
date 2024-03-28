#include <stdio.h>

int main()
{
	int a = 33554434;
	float b = 0.1;

	int c1 = a + b;
	int c2 = a + (int)b;

	printf("c1: %d, c2: %d", c1, c2);
}

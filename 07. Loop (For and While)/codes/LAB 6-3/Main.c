#include <stdio.h>

int main()
{
	int i = 1;
	int factorial = 1;

	while(factorial < 1000)
	{
		i++;
		factorial *= i;
	}

	printf("%d!: %d", i, factorial);
}

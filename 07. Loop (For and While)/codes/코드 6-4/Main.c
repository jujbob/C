#include <stdio.h>

int main()
{
	int i = 0;
	int Sum = 0;
	for(i = 0; Sum < 3000; i++)
		Sum = Sum + (i + 1);

	printf("1+...+%d >= %d", i, Sum);
}

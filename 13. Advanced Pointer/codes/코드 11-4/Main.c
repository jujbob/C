#include <stdio.h>

void rounds(int* p)
{
	*p = (*p + 5) / 10 * 10;
}

int main()
{
	int a = 7;
	printf("%d �ݿø�: ", a);

	rounds(&a);
	printf("%d", a);
}

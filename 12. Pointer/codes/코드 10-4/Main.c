#include <stdio.h>

int main()
{
	int a;

	int* p = &a;
	*p = 1;

	printf("a: %d", a);
}

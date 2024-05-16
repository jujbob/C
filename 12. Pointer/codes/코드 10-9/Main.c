#include <stdio.h>

int main()
{
	int q = 0;
	int* p = &q;

	*p = 1;
	printf("q: %d, *p: %d", q, *p);
}

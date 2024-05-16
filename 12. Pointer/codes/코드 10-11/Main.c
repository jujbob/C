#include <stdio.h>

int main()
{
	int* p;

	int s1 = sizeof(*(char*)p);
	int s2 = sizeof(*p);

	printf("s1: %d, s2: %d", s1, s2);
}

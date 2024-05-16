#include <stdio.h>

void VariableAddress(void* p1, void* p2)
{
	printf("%p, %p, %d", p1, p2, (char*)p1 - (char*)p2);
}

#include <stdio.h>
#include <malloc.h>

int main()
{
	int* p = malloc(4);
	*p = 1;
	printf("%d", *p);
	free(p);
}

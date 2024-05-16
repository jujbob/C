#include <stdio.h>

int main()
{
	char* pC = NULL;
	printf("pC + 1 = %p\r\n", pC + 1);

	int* pI = NULL;
	printf("pI + 1 = %p\r\n", pI + 1);

	double* pD = NULL;
	printf("pD + 1 = %p", pD + 1);
}

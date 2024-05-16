#include <stdio.h>

int main()
{
	char* pC;			// 대상 타입: char
	int* pI;			// 대상 타입: int
	double* pD;		// 대상 타입: double

	printf("%d, %d, %d", sizeof(pC), sizeof(pI), sizeof(pD));
}

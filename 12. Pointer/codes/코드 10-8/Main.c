#include <stdio.h>

int main()
{
	int* pI = NULL;
	printf("++pI: %p\r\n", ++pI);	// pI는 4가 되고 4 도출
	printf("--pI: %p\r\n", --pI);	// pI는 0이 되고 0 도출
	printf("pI++: %p\r\n", pI++);	// 0 도출한 뒤 pI는 4
	printf("pI--: %p", pI--);			// 4 도출한 뒤 pI는 0

	int a;
//++(&a), --(&a), (&a)++, (&a)--;	// Error
}

#include <stdio.h>

int main()
{
	int* pI = NULL;
	printf("++pI: %p\r\n", ++pI);	// pI�� 4�� �ǰ� 4 ����
	printf("--pI: %p\r\n", --pI);	// pI�� 0�� �ǰ� 0 ����
	printf("pI++: %p\r\n", pI++);	// 0 ������ �� pI�� 4
	printf("pI--: %p", pI--);			// 4 ������ �� pI�� 0

	int a;
//++(&a), --(&a), (&a)++, (&a)--;	// Error
}

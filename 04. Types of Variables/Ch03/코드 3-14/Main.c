#include <stdio.h>

int main()
{
	int hits1 = 2147483648;				// �ִ밪 + 1
	unsigned int hits2 = 4294967296;	// �ִ밪 + 1

	printf("hits1=%d, hits2=%d", hits1, hits2);
}

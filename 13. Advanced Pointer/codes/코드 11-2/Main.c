#include <stdio.h>

int main()
{
	int arr[2] = { 1, 2 };

	int* p = &arr;					// Warning
	printf("%d, %d\r\n", p[0], p[1]);

	int (*parr)[2] = &arr;	// OK
	printf("%d, %d", (*parr)[0], (*parr)[1]);
}

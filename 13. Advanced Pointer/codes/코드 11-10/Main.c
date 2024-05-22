#include <malloc.h>

int main()
{
//int arr[1024 * 1024 * 4] = { 0 };					// Runtime Error

	int size = 1024 * 1024 * 4 * sizeof(int);
	int* parr = malloc(size);									// OK
	free(parr);
}

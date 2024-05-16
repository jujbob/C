#include <stdio.h>

int main()
{
	int arr[3] = {1, 2, 3};
	int* p = arr;

	printf("%d, %d, %d", p[0], p[1], p[2]);
}

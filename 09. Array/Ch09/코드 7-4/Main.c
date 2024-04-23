#include <stdio.h>

int main()
{
	int arr1[2];
	arr1[0] = 1;
	arr1[1] = 2;

	int arr2[2];

	for(int i = 0; i < 2; i++)
		arr2[i] = arr1[i];

	printf("arr2[0]: %d\r\n", arr2[0]);
	printf("arr2[1]: %d", arr2[1]);
}

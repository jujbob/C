#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3 };
	
	memset(arr, 0, sizeof(arr));

	for(int i = 0; i < 3; i++)
	{
		printf("a[%d] = %d\r\n", i, arr[i]);
	}
}

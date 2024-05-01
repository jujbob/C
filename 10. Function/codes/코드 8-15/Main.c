#include <stdio.h>

void func(int param[1])
{
	param[0] = 2;
}

int main()
{
	int arr[1] = { 1 };

	printf("Before: %d\r\n", arr[0]);
	func(arr);
	printf("After: %d", arr[0]);
}

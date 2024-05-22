#include <stdio.h>

void func(int arg[16])
{
	arg[7] = 1;		// OK
	arg[8] = 2;		// Danger
}

int main()
{
	int arr[8];
	func(arr);
}

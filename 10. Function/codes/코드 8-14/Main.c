#include <stdio.h>

void func(int param)
{
	param = 2;
}

int main()
{
	int arg = 1;

	printf("Before: %d\r\n", arg);
	func(arg);
	printf("After: %d", arg);
}

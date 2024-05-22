#include <stdio.h>

void func(int* p)
{
	*p = 1;
}

int main()
{
	int a = 0;
	func(&a);

	printf("%d", a);
}

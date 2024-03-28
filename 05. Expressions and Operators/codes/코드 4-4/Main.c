#include <stdio.h>

int main()
{
	int a, b;

	a = 1;
	b = ++a;	// 전위형
	printf("a: %d, b: %d\r\n", a, b);

	a = 1;
	b = a++;	// 후위형
	printf("a: %d, b: %d", a, b);
}

#include <stdio.h>

int main()
{
	int a;

	a = 1;
	printf("++a: %d\r\n", ++a);	// 전위형

	a = 1;
	printf("a++: %d", a++);	// 후위형
}

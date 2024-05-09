#include <stdio.h>

void f()
{
	int a = 1;
}

void g()
{
	int a = 2;
}

int main()
{
	f();
	g();
	printf("%d", a);	// a?
}

#include <stdio.h>

void f()
{
	int a[1] = { 7 };
	printf("%d\r\n", a[0]);
}

void g()
{
	int b[1];		// √ ±‚»≠ æ»µ 
	printf("%d\r\n", b[0]);
}

int main()
{
	f();
	g();
}

#include <stdio.h>

void f()
{
	printf("f 함수");
}

void g(void)
{
	return;
	printf("g 함수");		// 출력 안됨
}

int main()
{
	f();
	g();
}

#include <stdio.h>

void func()
{
	static int s = 0;
	s++;
	printf("%d\r\n", s);
}

int main()
{
	func();   // 1 출력
	func();   // 2 출력
}

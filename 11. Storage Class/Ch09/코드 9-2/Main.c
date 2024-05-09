#include <stdio.h>

int not(int arg)
{
	int a = !arg;
	return a;
}

int main()
{
	int a = 0;
	int b = not(a);

	printf("%d, %d", a, b);
}

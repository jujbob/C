#include <stdio.h>

int multiply(int i, int j)
{
	return i * j;
}

int main(int arg, char** argc)
{
	int c = multiply(arg, arg);
}

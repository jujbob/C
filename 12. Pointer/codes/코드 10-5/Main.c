#include <stdio.h>

int main()
{
	int a = 0;

//char* p = &a;					// Warning
	char* p = (char*)&a;	// OK

	*(p + 0) = 'A';
	*(p + 1) = 'B';
	*(p + 2) = 'C';
	*(p + 3) = '\0';

	printf("%s", &a);
}

#include <stdio.h>

int main()
{
	unsigned char uc = 0b10000000;	// 2진법
	printf("uc >> 7: %d\r\n", uc >> 7);

	char c = 0b10000000;			// 2진법
	printf("c >> 7: %d", c >> 7);
}

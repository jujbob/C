#include <stdio.h>

int main()
{
	char c1 = 128;		// �ִ밪 + 1
	char c2 = -129;		// �ּҰ� - 1 
	printf("c1: %d\r\nc2: %d\r\n", c1, c2);

	unsigned char uc1 = 256;	// �ִ밪 + 1
	unsigned char uc2 = -1;		// �ּҰ� - 1 
	printf("uc1: %u\r\nunc2: %d", uc1, uc2);
}

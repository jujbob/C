#include <stdio.h>

int main()
{
	int c1 = (1 == 1);	// true
	int c2 = (1 != 1);	// false
	int c3 = (2 > 1);		// true
	int c4 = (2 < 1);		// false
	int c5 = (2 >= 1);	// true
	int c6 = (2 <= 1);	// false

	printf("%d %d %d %d %d %d", c1, c2, c3, c4, c5, c6);
}

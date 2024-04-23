#include <stdio.h>

int main()
{
	char s1[] = { 'K', 'o', 'r', 'e', 'a' };
	char s2[] = { 'K', 'o', 'r', 'e', 'a', '\0' };

	printf("%s\r\n%s", s1, s2);
}

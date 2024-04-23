#include <stdio.h>

int main()
{
	char s1[] = {'K', 'o', 'r', 'e', 'a', '\0' };
	char s2[] = { "Korea" };
	char s3[] = "Korea";

	printf("%s %s %s", s1, s2, s3);
}

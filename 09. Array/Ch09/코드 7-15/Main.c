#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "����ó�� C ���α׷���";
	int slen1 = sizeof(str) / sizeof(str[0]) - 1;
	int slen2 = strlen(str);

	printf("slen1: %d\r\nstrlen: %d", slen1, slen2);
}

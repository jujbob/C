#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char input[128] = { 0 };

	printf("�Է�> ");
	scanf("%[^\n]s", input);

	printf("���> %s", input);
}

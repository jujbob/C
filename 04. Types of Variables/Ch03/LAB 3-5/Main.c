#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char upper, lower;
	printf("���ĺ� �빮�ڸ� �Է��ϼ���.\r\n");

	scanf("%c", &upper);
	lower = 'a' + upper - 'A';
	printf("�ҹ���: %c", lower);
}

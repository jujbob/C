#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("������ �Է��ϼ���.\r\n");
	scanf("%d", &n);

	if(n % 2)
		printf("Ȧ���Դϴ�.");

	if(!(n % 2))
		printf("¦���Դϴ�.");
}

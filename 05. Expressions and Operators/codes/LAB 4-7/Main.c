#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("������ �Է��ϼ���.\r\n");
	
	scanf("%d", &n);
	n += n % 2 == 0 ? 2 : 1;
	printf("���� ¦��: %d", n);
}

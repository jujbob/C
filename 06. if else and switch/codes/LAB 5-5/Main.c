#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("������ �Է��ϼ���!\r\n");
	scanf("%d", &n);

	if(n % 8 == 0)
		goto EIGHT;
	else if(n % 4 == 0)
		goto FOUR;
	else if(n % 2 == 0)
		goto TWO;

	printf("2, 4, 8�� ��� �ƴ�");

EIGHT:
	printf("8�� ���, "); 
FOUR:
	printf("4�� ���, ");
TWO:
	printf("2�� ���"); 
}

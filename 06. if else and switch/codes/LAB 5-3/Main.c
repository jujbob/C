#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("������ �Է��ϼ���.\r\n");
	scanf("%d", &n);

	if(!(n % 2) && !(n % 3))
		printf("2�� 3�� ������Դϴ�.");
	else if(!(n % 2))
		printf("2�� ����Դϴ�.");
	else if(!(n % 3))
		printf("3�� ����Դϴ�.");
	else
		printf("2�� 3�� ������� �ƴմϴ�.");
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int Number;

	do 
	{
		printf("1������ 4������ ���ϴ� ��ȣ�� �Է��ϼ���! ");
		scanf("%d", &Number);
	} 
	while(Number > 4);

	printf("������ ��ȣ�� %d�Դϴ�.", Number);
}

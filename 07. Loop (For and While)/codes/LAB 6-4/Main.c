#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, sum = 0;

	do 
	{
		printf("���ϰ� ���� ���� �Է��ϼ��� > ");
		scanf("%d", &n);
		sum += n;
	} 
	while(n != 0);

	printf("�� ���� %d�Դϴ�.", sum);
}

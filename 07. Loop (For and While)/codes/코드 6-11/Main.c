#include <stdio.h>

int main()
{
	for(int i = 2; i < 10; i++)	// 2�ܺ��� 9�ܱ���
	{
		for(int j = 1; j < 10; j++)
			printf("%d * %d = %d\r\n", i, j, i * j);
		printf("\r\n");						// �ܸ��� �� �ٲ�
	}
}

#include <stdio.h>

int main()
{
	int i = 0;				// �ʱ�ȭ��
	int Sum = 0;

	while(i < 100)		// while�� ����
	{
		Sum = Sum + (i + 1);
		i++;						// �ݺ���
	}									// while�� ��

	printf("����: %d", Sum);
}

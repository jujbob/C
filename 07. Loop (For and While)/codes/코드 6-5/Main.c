#include <stdio.h>

int main()
{
	int i = 0;				// �ʱ�ȭ��
	int Sum = 0;

	for( ; i < 100; )	// for�� ����
	{									// ��ɹ� ����
		Sum = Sum + (i  + 1);
		i++;						// �ݺ���
	}									// ��ɹ� ��, for�� ��

	printf("����: %d", Sum);
}

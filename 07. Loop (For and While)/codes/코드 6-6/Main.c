#include <stdio.h>

int main()
{
	int i = 0;		// �ʱ�ȭ��
	int Sum = 0;

	for(;;)				// for�� ����
	{
		Sum = Sum + (i + 1);
		i++;				// �ݺ���

		if(i > 99)
			break;		// for�� Ż��
	}							// for�� ��

	printf("����: %d", Sum);
}

#include <stdio.h>

int main()
{
	int i = 0;
	int Sum = 0;

	while(1)		// whie�� ����
	{
		Sum = Sum + (i + 1);
		i++;			// �ݺ���

		if(i > 99)
			break;	// while�� Ż��
	}						// while�� ��

	printf("����: %d", Sum);
}

#include <stdio.h>

int main()
{
	for(int i = 2; i < 10; i++)	// for�� ����
	{
		int j = 1;
		while(1)									// while�� ����
		{
			printf("%d * %d = %d\r\n", i, j, i * j);
			j++;
			if(j > 9)
				break;								// while���� Ż���Ѵ�.
		}													// while�� ��

		printf("\r\n");
	}														// for�� ��
}

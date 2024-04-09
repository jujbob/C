#include <stdio.h>

int main()
{
	printf("2, ");

	for(int i = 3; i <= 100; i += 2)
	{
		int flag = 1;
		for(int j = 3; j < i; j += 2)	
		{
			if(i % j == 0)
			{
				flag = 0;
				break;
			}
		}

		if(flag)
			printf("%d, ", i);
	}
}

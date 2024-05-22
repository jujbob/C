#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

int main()
{
	int index = 0;
	int size = 2;
	int* p = malloc(size * sizeof(int));

	while(1)
	{
		if(index >= size)
		{
			size += 2;
			p = realloc(p, size * sizeof(int));
		}
		
		int n;
		printf("저장할 수를 입력하세요 > ");
		scanf("%d", &n);

		if(n)
		{
			p[index++] = n;
			for(int i = 0; i < index; i++)
				printf("%d ", p[i]);

			printf("\r\n");
		}
		else
			break;
	} 

	free(p);
}

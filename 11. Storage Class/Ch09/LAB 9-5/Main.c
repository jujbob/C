#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Sum;

void add(int n)
{
	static int s_Index;
	static int s_Arr[1024];

	g_Sum += n;
	s_Arr[s_Index] = n;
	s_Index++;

	printf("%d ", s_Arr[0]);
	for(int i = 1; i < s_Index; i++)
	{
		if(s_Arr[i] > 0)
			printf("+ %d ", s_Arr[i]);
		else if(s_Arr[i] < 0)
			printf("- %d ", -s_Arr[i]);
	}

	printf("= %d\r\n", g_Sum);
}

int main()
{
	while(1)
	{
		int n;
		printf("더할 수를 입력하세요 > ");
		scanf("%d", &n);

		if(n)
				add(n);
		else
			break;
	} 
}

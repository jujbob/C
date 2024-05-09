#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Sum;

void add(int n)
{
	static int s_plusIndex;
	static int s_plusArr[256];

	static int s_minusIndex;
	static int s_minusArr[256];

	g_Sum += n;

	if(n > 0)
	{
		s_plusArr[s_plusIndex] = n;
		s_plusIndex++;
	}
	else if(n < 0)
	{
		s_minusArr[s_minusIndex] = n;
		s_minusIndex++;
	}

	if(s_plusIndex > 0)
	{
		printf("( %d ", s_plusArr[0]);
		for(int i = 1; i < s_plusIndex; i++)
				printf("+ %d ", s_plusArr[i]);

		printf(")");
	}

	if(s_minusIndex > 0)
	{
		printf(" - ( %d ", -s_minusArr[0]);
		for(int i = 1; i < s_minusIndex; i++)
			printf("+ %d ", -s_minusArr[i]);

		printf(")");
	}

	printf(" = %d\r\n", g_Sum);
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

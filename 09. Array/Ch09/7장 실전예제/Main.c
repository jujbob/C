#include <stdio.h>

int main()
{
	char str[64] = {0};

	char str1[] = "난생처음";
	char str2[] = "C 프로그래밍";

	int si = 0, i = 0;

	for(i = 0; i < sizeof(str1); i++)
	{
		if(str1[i] != '\0')
		{
			str[si] = str1[i];
			si++;
		}
		else
			break;
	}

	str[si] = ' ';
	si++;

	for(i = 0; i < sizeof(str2); i++)
	{
		if(str2[i] != '\0')
		{
			str[si] = str2[i];
			si++;
		}
		else
			break;
	}

	printf("%s", str);
}

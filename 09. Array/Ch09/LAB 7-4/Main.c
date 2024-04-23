#include <stdio.h>

int main()
{
	char str[128] = "abcdefghijklmnopqrstuvwxyz0123456789";

	for(int i = 0; i < 128; i++)
	{
		if(str[i] == '\0')
		{
			printf("문자열의 길이: %d", i);
			break;
		}
	}
}

#include <stdio.h>
#include <malloc.h>

char* CatenateString(const char* str1, const char* str2)
{
	int len1 = 0;
	while(str1[len1] != '\0') 
		len1++;

	int len2 = 0;
	while(str2[len2] != '\0')
		len2++;
	
	int index = 0;
	char* pStr = malloc(len1 + len2 + 1);

	for(int i = 0; i < len1; i++)
	{
		pStr[index++] = str1[i];
	}

	for(int i = 0; i < len2; i++)
	{
		pStr[index++] = str2[i];
	}

	pStr[index] = '\0';

	return pStr;
}

int main()
{
	char* str = CatenateString("난생처음", " C 프로그래밍");
	printf("%s", str);

	free(str);
}

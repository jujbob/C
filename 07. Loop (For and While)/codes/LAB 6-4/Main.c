#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, sum = 0;

	do 
	{
		printf("더하고 싶은 수를 입력하세요 > ");
		scanf("%d", &n);
		sum += n;
	} 
	while(n != 0);

	printf("총 합은 %d입니다.", sum);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n;
	printf("정수를 입력하세요!\r\n");
	scanf("%d", &n);

	if(n % 8 == 0)
		goto EIGHT;
	else if(n % 4 == 0)
		goto FOUR;
	else if(n % 2 == 0)
		goto TWO;

	printf("2, 4, 8의 배수 아님");

EIGHT:
	printf("8의 배수, "); 
FOUR:
	printf("4의 배수, ");
TWO:
	printf("2의 배수"); 
}

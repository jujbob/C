#include <stdio.h>

int main()
{
	int i;
	printf("%d\r\n", i);	// Error - 초기화되지 않은 지역 변수 사용

	int arr[1];
	printf("%d", arr[0]);
}

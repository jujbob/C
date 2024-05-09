#include <stdio.h>

void func()
{
	int b = 3;
	int brr[1] = { 4 };
	printf("%d", a);			// Error - 선언되지 않은 식별자
	printf("%d", arr[0]);	// Error - 선언되지 않은 식별자
}

int main()
{
	int a = 1;
	int arr[1] = { 2 };
	func();
	printf("%d", b);			// Error - 선언되지 않은 식별자
	printf("%d", brr[0]);	// Error - 선언되지 않은 식별자
}

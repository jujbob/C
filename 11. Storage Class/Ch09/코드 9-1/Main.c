#include <stdio.h>

void func()
{
	int b = 3;
	int brr[1] = { 4 };
	printf("%d", a);			// Error - ������� ���� �ĺ���
	printf("%d", arr[0]);	// Error - ������� ���� �ĺ���
}

int main()
{
	int a = 1;
	int arr[1] = { 2 };
	func();
	printf("%d", b);			// Error - ������� ���� �ĺ���
	printf("%d", brr[0]);	// Error - ������� ���� �ĺ���
}

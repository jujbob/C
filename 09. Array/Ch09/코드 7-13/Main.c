#include <stdio.h>

int main()
{
	int arr[] = { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
	int alen = sizeof(arr) / sizeof(arr[0]);

	char str[] = "C Programming for the fisrt time";
	int slen = sizeof(str) / sizeof(str[0]) - 1;

	printf("alen: %d\r\nslen: %d", alen, slen);
}

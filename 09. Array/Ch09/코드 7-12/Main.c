#include <stdio.h>

int main()
{
	int arr[8];
	int size = sizeof(arr);
	int length = size / sizeof(int);

	printf("�迭�� ũ��:%d\r\n�迭�� ����:%d", size, length);
}

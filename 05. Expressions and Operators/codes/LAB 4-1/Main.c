#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Multiply(int a, int b)
{
	return a * b;
}

int main()
{
	int width, depth, height;

	printf("������ü�� ����, ����, ���̸� �Է��ϼ���.\r\n");
	scanf("%d%d%d", &width, &depth, &height);

	int volume = Multiply(Multiply(width, depth), height);

	printf("����: %d", volume);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Multiply(int a, int b)
{
	return a * b;
}

int main()
{
	int width, depth, height;

	printf("직육면체의 가로, 세로, 높이를 입력하세요.\r\n");
	scanf("%d%d%d", &width, &depth, &height);

	int volume = Multiply(Multiply(width, depth), height);

	printf("부피: %d", volume);
}

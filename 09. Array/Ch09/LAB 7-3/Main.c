#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int r, c;
	printf("�������� �ܰ� ���� �������� �����Ͽ� �Է��ϼ���.\r\n");
	scanf("%d%d", &r, &c);

	int table[8][9] = { { 0 } };
	for(int i = 2; i < 10; i++ )
		for(int j = 1; j < 10; j++)
			table[i-2][j-1] = i * j;

	printf("%d * %d = %d", r, c, table[r-2][c-1]);
}

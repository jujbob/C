#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i1, i2, i3;
	printf("�� ������ �������� �����Ͽ� �Է��ϼ���!\r\n");
	scanf("%d%d%d", &i1, &i2, &i3);
	
	if(i1 >= i2)
		if(i2 >= i3)
			printf("%d, %d, %d", i3, i2, i1);
		else
			if(i1 >= i3)
				printf("%d, %d, %d", i2, i3, i1);
			else
				printf("%d, %d, %d", i2, i1, i3);
	else
		if(i1 >= i3)
			printf("%d, %d, %d", i3, i1, i2);
		else
			if(i2 >= i3)
				printf("%d, %d, %d", i1, i3, i2);
			else
				printf("%d, %d, %d", i1, i2, i3);
}

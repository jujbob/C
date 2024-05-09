#include <stdio.h>

int main()
{												// 첫 번째 a의 가시 범위 시작
	int a = 1;            // 첫 번째 a

	{											// 두 번째 a 가시 범위 시작
		int a = 2;          // 두 번째 a
		printf("%d\r\n", a);
	}											// 두 번째 a 가시 범위 끝

	printf("%d", a);
}                       // 첫 번째 b의 가시 범위 시작

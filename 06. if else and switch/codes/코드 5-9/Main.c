#include <stdio.h>

int main()
{
	switch(2)										// case 2로 실행 흐름 분기
	{
	case 1: printf("1"); break;
	case 2: printf("2"); break;	// 실행 후 switch문 탈출
	case 3: printf("3"); break; 
	default: printf("D");
	}
}

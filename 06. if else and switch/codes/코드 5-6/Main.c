#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int age;
	printf("나이를 입력하세요!\r\n");
	scanf("%d", &age);

	if(age >= 20)									// if문 시작
		printf("성인입니다.");
	else if(age >= 12)
		printf("청소년입니다.");
	else
		printf("아동입니다.");	// if문 끝
}

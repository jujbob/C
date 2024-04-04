#include <stdio.h>

int main()
{
	int age = 45;

	if(age >= 20)										// if문 시작
		printf("20대 이상입니다.");
	else if (age >= 30)	
		printf("30대 이상입니다.");
	else if (age >= 40)	
		printf("40대 이상입니다.");
	else
		printf("50대 이상입니다.");		// if문 끝
}

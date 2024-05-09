#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Balance = 0;

void Deposit(int amount)
{
	g_Balance += amount;
	printf("입금: %d원, 잔고: %d원\r\n", amount, g_Balance);
}

void Withdraw(int amount)
{
	g_Balance -= amount;
	printf("출금: %d원, 잔고: %d원\r\n", amount, g_Balance);
}

int main()
{
	int amount;

	while(1)
	{
		printf("입출금액을 입력하세요 > ");
		scanf("%d", &amount);

		if(amount > 0)
			Deposit(amount);
		else if(amount < 0)
			Withdraw(-amount);
		else
			break;
	} 
}

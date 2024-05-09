#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Balance = 0;

void Deposit(int amount)
{
	static int s_Total = 0;

	g_Balance += amount;
	s_Total += amount;
	printf("입금: %d원, 총입금액: %d원, 잔고: %d원\r\n", 
				 amount, s_Total, g_Balance);
}

void Withdraw(int amount)
{
	static int s_Total = 0;

	g_Balance -= amount;
	s_Total += amount;
	printf("출금: %d원, 총출금액: %d원, 잔고: %d원\r\n", 
				 amount, s_Total, g_Balance);
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

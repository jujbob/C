#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Balance = 0;

void Deposit(int amount)
{
	g_Balance += amount;
	printf("�Ա�: %d��, �ܰ�: %d��\r\n", amount, g_Balance);
}

void Withdraw(int amount)
{
	g_Balance -= amount;
	printf("���: %d��, �ܰ�: %d��\r\n", amount, g_Balance);
}

int main()
{
	int amount;

	while(1)
	{
		printf("����ݾ��� �Է��ϼ��� > ");
		scanf("%d", &amount);

		if(amount > 0)
			Deposit(amount);
		else if(amount < 0)
			Withdraw(-amount);
		else
			break;
	} 
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int g_Balance = 0;

void Deposit(int amount)
{
	static int s_Total = 0;

	g_Balance += amount;
	s_Total += amount;
	printf("�Ա�: %d��, ���Աݾ�: %d��, �ܰ�: %d��\r\n", 
				 amount, s_Total, g_Balance);
}

void Withdraw(int amount)
{
	static int s_Total = 0;

	g_Balance -= amount;
	s_Total += amount;
	printf("���: %d��, ����ݾ�: %d��, �ܰ�: %d��\r\n", 
				 amount, s_Total, g_Balance);
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

void func(int arg)
{               // arg�� a�� ���� ���� ����
	arg = 1;
	int a = 2;

	{							// b ���� ���� ����
		int b = 3;
	}             // b ���� ���� ��

	b = 4;        // Error - b�� ���� ���� ��
}               // arg�� a�� ���� ���� ����

int main()
{
	func(0);
}

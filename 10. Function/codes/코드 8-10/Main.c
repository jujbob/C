void funcB();		// �Լ� ����

void funcA()
{
	funcB();
}

void funcB()
{
	funcA();
}

int main()
{
	funcA();
}

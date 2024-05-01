void funcB();		// 함수 선언

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

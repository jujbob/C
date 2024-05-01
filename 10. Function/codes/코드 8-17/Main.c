void funcC(int arg)
{
	arg = 1;
}

void funcB(int arg)
{
	funcC(arg + 1);
}

void funcA(int arg)
{
	funcB(arg + 1);
}

int main()
{
	funcA(1);
}

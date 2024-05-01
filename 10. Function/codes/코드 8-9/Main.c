void funcA()
{
	funcB();		// Warning
}

void funcB()	// Error
{
	funcA();
}

int main()
{
	funcA();
}

void func()
{
	g = 2;	// Error - 선언되지 않은 식별자
}

int g;

int main()
{
	g = 1;	// OK
	func();
}

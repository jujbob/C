void func()
{
	g = 2;	// Error - ������� ���� �ĺ���
}

int g;

int main()
{
	g = 1;	// OK
	func();
}

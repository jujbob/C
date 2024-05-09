void func(int arg)
{               // arg와 a의 가시 범위 시작
	arg = 1;
	int a = 2;

	{							// b 가시 범위 시작
		int b = 3;
	}             // b 가시 범위 끝

	b = 4;        // Error - b의 가시 범위 밖
}               // arg와 a의 가시 범위 시작

int main()
{
	func(0);
}

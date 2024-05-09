int get()
{
	return 1;
}

int g1 = 1;
int g2 = g1;		// Error - 상수가 아닙니다.
int g3 = get();	// Error - 상수가 아닙니다.

int main()
{
}

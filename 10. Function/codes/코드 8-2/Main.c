#include <stdio.h>

void f()
{
	printf("f �Լ�");
}

void g(void)
{
	return;
	printf("g �Լ�");		// ��� �ȵ�
}

int main()
{
	f();
	g();
}

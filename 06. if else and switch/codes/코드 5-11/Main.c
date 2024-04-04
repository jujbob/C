#include <stdio.h>

int main()
{
	switch(3.14)										// 정수 아님
	{
	case 3.14: printf("3.14");			// 정수 상수 아님
	}

	switch("C언어")									// 정수 아님
	{
	case "C언어": printf("C언어");	// 정수 상수 아님
	}

	int i = 3;
	switch(i)
	{
	case i: printf("3");						// 정수 상수 아님
	}
}

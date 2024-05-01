#include <stdio.h>

int Sum(int index, int arr[])
{
	if(index == 0)
		return arr[0];

	return arr[index] + Sum(index - 1, arr);
}

int main()
{
	int arr[] = { 3, 5, 1, 10, 9, 8, 2, 6, 4, 7 };
	
	int count = sizeof(arr) / sizeof(arr[0]);
	printf("Sum: %d", Sum(count - 1, arr));
}

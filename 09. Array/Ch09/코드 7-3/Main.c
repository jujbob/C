int main()
{
	int a1 = 1;

	int a2 = a1;					// OK

	int a3;
	a3 = a1;							// OK

	int arr1[2];
	arr1[0] = 1;
	arr1[1] = 2;

	int arr2[2] = arr1;		// Error
	
	int arr3[2];
	arr3 = arr1;					// Error
}

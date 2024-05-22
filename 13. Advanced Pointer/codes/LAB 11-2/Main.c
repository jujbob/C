void Sort(int arr[], int count)
{
	for(int i = 0; i < count - 1; i++)
		for(int j = i + 1; j < count; j++)
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
}

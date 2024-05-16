int main()
{
	int arr[32];
	char* p = (char*)arr;

	for(int i = 0; i < sizeof(arr); i++)
	{
		*p = 0b11111111;
		p++;
	}
}

int main()
{
	int i = 0;
	void* p = &i;

//p + 1;				// Error
	(int*)p + 1;	// OK

//p++;					// Error
	((int*)p)++;	// OK

//p[0];					// Error
	((int*)p)[0];	// OK
}

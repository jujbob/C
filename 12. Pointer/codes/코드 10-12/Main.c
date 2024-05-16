int main()
{
	int i;

	int* pI = &i;
	double* pD = &i;	// Warning
	void* pV = &i;

	pI = pD;					// Warning
	pI = pV;
}

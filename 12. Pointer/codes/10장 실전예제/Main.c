void* mymemset(void* dest, int c, size_t count)
{
	char* p = dest;
	for(int i = 0; i < count; i++)
		p[i] = c;

	return p;
}

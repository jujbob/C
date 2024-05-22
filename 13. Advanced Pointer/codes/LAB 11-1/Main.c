int mystrlen(const char* str)
{
	for(int i = 0; ; i++)
		if(str[i] == '\0')
			return i;
}

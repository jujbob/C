int main()
{
	int a;

	int s1 = sizeof(a);			// OK 4
	int s2 = sizeof a;			// OK 4
	int s3 = sizeof(int);		// OK 4
	int s4 = sizeof int;		// Error - Ç¥Çö½Ä ¾Æ´Ô
	int s5 = sizeof(9999);	// OK 4
	int s6 = sizeof 9999;		// OK 4
}

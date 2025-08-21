#include <stdio.h>

void main()
{
	void hannoi(int n, char A, char B, char C);	// ÉùÃ÷º¯Êý
	hannoi(5, 'A', 'B', 'C');
}

void hannoi(int n, char A, char B, char C)
{
	void move(char x, char y);
	if (n == 1)
		move(A, C);
	else
	{
		hannoi(n - 1, A, C, B);
		move(A, C);
		hannoi(n - 1, B, A, C);
	}
}

void move(char x, char y)
{
	printf("%C ---> %C\n", x,y);
}
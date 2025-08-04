#include <stdio.h>
int main()
{
	int x, y;
	printf("ÇëÊäÈëxµÄÖµ");
	scanf_s("%d", &x);
	if (x < 1)
		y = x;
	else
	{
		if (1 <= x < 10)
			y = 2 * x - 1;
		else
			y = 3 * x - 1;
	}
	printf("x=%dy=%d\n", x, y);
	return 0;	
}
#include<stdio.h>
int main()
{
	float x, y;
	printf("ÇëÊäÈëXµÄÖµ:");
	scanf_s("%f", &x);
	if (x < 0)
		y = -1;
	else
		if (x == 0)y = 0;
		else y = 1;
	printf("x=%f y=%f\n", x, y);
		return 0;
}
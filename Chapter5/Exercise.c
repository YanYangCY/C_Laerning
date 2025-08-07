#include<stdio.h>
int main()
{
	int n, k;
	long long int s = 0; // sum
	long long int t = 1; 
	printf("please enter k:");
	scanf_s("%d", &k);
	if (k >= 1)
	{
		for (n = 1; n <= k; n++)
		{
			t = t * n;
			s = s + t;
		}
		printf("sum=%lld", s);
	}
	else
	{
		printf("enter is mistake");
	}
	return 0;
}
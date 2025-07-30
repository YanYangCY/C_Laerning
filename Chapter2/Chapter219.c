# include <stdio.h>

int main()
{
	int sign = 1;	// 符号
	float done = 2.0, sum = 1.0, term;	// 分母 求和 分数

	while (done <= 100)	// while循环
	{
		sign =-1* sign;		// 符合
		term=sign  / done ;	// 分数
		sum = sum + term;	// 求和
		done = done+ 1;		// 分母累加
	}
	printf("%f \n", sum);	// 输出求和值
	return 0;
}
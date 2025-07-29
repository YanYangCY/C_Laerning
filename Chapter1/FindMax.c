#include<stdio.h>	// 预编译库

int main()	//主函数
{
	int max(int x, int y, int z);
	int a, b, c, d;
	printf("输入三个整数(以空格键分隔)：");
	scanf_s("%d %d %d", &a, &b, &c);
	d = max(a, b, c);
	printf("max=%d\n", d);
	return 0;
}

/// <summary>
/// max自建函数
/// 功能：求输入数当中最大的数并返回
/// </summary>
/// <returns></returns>
int max(int x, int y, int z)
{
	int k;
	if (x > y && x > z)
		k = x;
	else if (y > x && y > z)
		k = y;
	else 
		k = z;
	return(k);

}




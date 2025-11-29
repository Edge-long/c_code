#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main008()
{
	//求一个整数存储在内存中的二进制中1的个数

	//方法一
	int num = 0;
	//记录输入值的二进制形式中1的个数
	int count = 0;
	scanf("%d", &num);
	for (int i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);

	//方法二
	int n = 0;
	//记录输入值的二进制形式中1的个数
	int c = 0;
	scanf("%d", &n);
	while (n)
	{
		//每次遍历时让n的二进制形式减一个1的个数
		n = n & (n - 1);
		c++;
	}
	printf("%d\n", c);

	return 0;

}

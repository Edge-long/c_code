#include <stdio.h>

//计算阶乘的函数
int Fac(int n)
{
	//从n递减到1后从1乘归到n
	if (n == 0)
	{
		return 1;
	}
	return n * Fac(n - 1);
}

int main04()
{
	//求1! + 2! + 3! + 4! + 5! + 6! + 7! + 8! + 9! + 10!的和，!代表阶乘

	//方法一
	//记录相加后的和
	int sum = 0;
	//记录每个数阶乘的和
	int ret = 1;
	for (int i = 1; i <= 10; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("%d\n", sum);

	//方法二
	//记录相加后的和
	int m = 0;
	//从1到n依次传入计算阶乘的递归函数
	for (int i = 1; i <= 10; i++)
	{
		//将返回的阶乘累加
		m += Fac(i);
	}
	printf("%d\n", m);
	
    return 0;
}

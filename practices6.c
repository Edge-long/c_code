#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//求第n个斐波那契数的函数
int Fib(int n)
{
	int a = 1;
	int b = 1;
	//默认c为第1或第2个斐波那契数
	int c = 1;
	//如果第n个斐波那契数不是第1或2个
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
//int Fib(int n)
//{
//	//递到第1和2个斐波那契数
//	if (n <= 2)
//	{
//		//第1和2个斐波那契数在数列中为1
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}

int main006()
{
	//求第n个斐波那契数

	int n = 0;
	scanf("%d", &n);
	int r = Fib(n);
	printf("%d\n", r);

	return 0;

}

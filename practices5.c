#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//顺序打印一个整数的函数
void Print(int m)
{
	//递到m只有一位数
	if (m > 9)
	{
		Print(m / 10);
	}
	//回归时每次打印m的最后一位
	printf("%d ", m % 10);
}

//逆序打印一个整数的函数
//void Reverse(int m)
//{
//	printf("%d ", m % 10);
//	if (m > 9)
//	{
//		Reverse(m / 10);
//	}
//}
//void Reverse(int m)
//{
//	printf("%d ", m % 10);
//	if (m < 10)
//	{
//		return;
//	}
//	Reverse(m / 10);
//}


int main05()
{
	//顺序打印一个整数的每一位
	//输入一个整数m，按照顺序打印整数的每一位

	int m = 0;
	scanf("%d", &m);
	Print(m);
	printf("\n");
	//Reverse(m);

	return 0;
}
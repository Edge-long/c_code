#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main007()
{
	//不能创建第三个变量，实现两个整数的交换

	//方法一
	int a = 0;
	int b = 0;
	scanf("%d%*c%d", &a, &b);
	//打印交换前的值
	printf("a = %d, b = %d\n", a, b);
	//a等于a与b的和
	a = a + b;
	//a减b等于原a
	b = a - b;
	//a减新b等于原b
	a = a - b;
	//打印交换后的值
	printf("a = %d, b = %d\n", a, b);

	//方法二
	scanf("%d%*c%d", &a, &b);
	//打印交换前的值
	printf("a = %d, b = %d\n", a, b);
	//利用异或操作符特性
	//0 ^ 3 = 3; -> 3 ^ 3 = 0; -> 3 ^ 3 ^ 5 = 5; -> 3 ^ 5 ^ 3 = 0;
	a = a ^ b;
	b = a ^ b; //a ^ b ^ b = a
	a = a ^ b; //a ^ b ^ a = b
	//打印交换后的值
	printf("a = %d, b = %d\n", a, b);

	return 0;

}

#include <stdio.h>

int main018()
{
	//写一个程序判断当前机器的字节序

	int a = 1;
	//如果首字节存储低位数据，为小端存储
	if (*(char*)&a == 1) //利用char*指针的访问权限，访问a的首字节
	{
		printf("小端字节序\n");
	}
	else //如果首字节存储高位数据，为大端存储
	{
		printf("大端字节序\n");
	}

	return 0;
}
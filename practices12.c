#include <stdio.h>
#include <assert.h>

//拷贝字符串的函数，返回值为目标空间的起始地址
char* string_copy(char* dest, const char* str)
{
	//断言传入的指针变量不为空
	assert(dest && str);
	//记录dest指针的偏移量
	int count = 1; //int* ret = dest;
	 //拷贝字符串到\0，先赋值再判断表达式的结果，最后指针++
	while (*dest++ = *str++)
	{
		count++;
	}
	//dest指针减偏移量为起始地址
	return dest - count; //ret;
}

int main012()
{
	//模拟实现strcpy函数拷贝字符串

	char string[] = "hello world";
	char destst[20] = { 0 };
	//使用函数的返回值打印
	printf("%s\n", string_copy(destst, string));
	//使用拷贝到的数组打印
	printf("%s\n", destst);

	return 0;
}
#include <stdio.h>
#include <assert.h>

//追加字符串的函数，返回值为目标空间的起始地址
char* string_cat(char* dest, const char* str)
{
	//断言传入的指针变量不为空
	assert(dest && str);
	//记录目标空间的起始地址
	char* ret = dest;
	//寻找dest指向的字符串末尾的\0
	while (*dest)
	{
		dest++;
	}
	//从目标空间的\0开始追加str指向的字符串到\0
	while (*dest++ = *str++)
	{
		;
	}
	return ret;
}

int main013()
{
	//模拟实现strcat函数追加字符串

	char arr1[20] = "hello";
	char arr2[7] = " world";
	//使用函数的返回值打印
	printf("%s\n", string_cat(arr1, arr2));
	//使用追加到的数组打印
	printf("%s\n", arr1);

	return 0;
}
#include <stdio.h>

//求字符串长度的函数，返回值为无符号整型
size_t string_len(char* p)
{
	//记录字符串首地址
	char* start = p;
	//让p指向\0，\0的ASCLL码值为0
	while (*p)
	{
		p++;
	}
	//返回首地址到\0的距离，既是字符串长度
	return p - start;
	//记录字符串长度
	//size_t count = 0;
	//while (*p != '\0')
	//{
	//	count++;
	//	p++;
	//}
	//return count;
}

int main010()
{
	//写一个函数求字符串的长度

	char string[] = "abcdef";
	printf("%zu\n", string_len(string));

	return 0;
}
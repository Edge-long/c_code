#include <stdio.h>
#include <assert.h>

//允许内存重叠按照内存拷贝的函数，返回值为目标空间的起始地址
void* memory_move(void* dest, const void* source, size_t num)
{
	//断言传入的指针变量不为空
	assert(dest && source);
	//记录目标空间的起始地址
	void* ret = dest;
	//如果目标地址比源头地址小，从前向后拷贝
	if (dest < source)
	{
		//循环次数为传入数据的字节个数
		while (num--)
		{
			*(char*)dest = *(char*)source;
			dest = (char*)dest + 1;
			source = (char*)source + 1;
		}
	}
	else //如果目标地址比源数据地址大，从后向前拷贝
	{
		//循环次数为传入数据的字节个数
		while (num--)
		{
			//将dest和source指针从后向前拷贝遍历
			*((char*)dest + num) = *((char*)source + num);
		}
	}
	return ret;
}

int main017()
{
	//模拟实现memmove函数完成内存拷贝，允许内存重叠

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	memory_move(arr + 2, arr, 20);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
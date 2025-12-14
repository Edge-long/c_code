#include <stdio.h>
#include <assert.h>

//按照内存拷贝的函数，返回值为目标空间的起始地址
void* memory_copy(void* dest, const void* source, size_t num)
{
	//断言传入的指针变量不为空
	assert(dest && source);
	//记录目标空间的起始地址
	void* ret = dest;
	//循环次数为传入数据的字节个数
	while (num--)
	{
		//按照字节拷贝元素
		*(char*)dest = *(char*)source;
		//将dest和source指针自增加1字节
		dest = (char*)dest + 1;
		source = (char*)source + 1;
	}
	return ret;
}

int main016()
{
	//模拟实现memcpy函数完成内存拷贝

	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int arr2[10];
	memory_copy(arr2, arr1, sizeof(arr1));
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");

	return 0;
}
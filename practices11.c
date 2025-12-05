#include <stdio.h>

//按照字节交换两个元素的函数(元素1地址, 元素2地址, 元素大小)
void Swap_(char* buf1, char* buf2, size_t width)
{
	//按照字节交换两元素，交换字节数为元素大小
	for (int i = 0; i < width; i++)
	{
		char tmp = buf1[i];
		buf1[i] = buf2[i];
		buf2[i] = tmp;
	}
}

//排序数组的函数(数组首地址, 元素个数, 元素大小, 排序及比较方式)
void Bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(void* p1, void* p2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			//转换为char*指针后表跳过元素大小个字节个数，乘j表每次跳过的元素个数
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换j和j + 1处的元素
				Swap_((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}

//定义整型排序及比较方式的函数(元素1地址, 元素2地址)
int cmp_int(const void* p1, const void* p2)
{
	//1比2大时交换，升序
	return *(int*)p1 - *(int*)p2;
}

int main011()
{
	//使用回调函数模拟实现qsort函数，采用冒泡排序

	int arr[] = { 3, 1, 5, 8, 7, 9, 2, 4, 6, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
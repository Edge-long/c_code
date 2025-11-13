#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main02()
{
	//二分查找
	//在一个升序的整型数组中查找指定的值n，找到返回n的下标，找不到返回-1

	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int n = 0; //存储输入值
	scanf("%d", &n);
	//查找域左值下标
	int left = 0;
	//查找域右值下标
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//查找域中间值下标
	int mid = 0;
	//查找标志
	bool flag = false;
	//遍历数组缩小查找域
	while (left <= right)
	{
		//计算查找域中间值下标
		mid = (left + right) / 2;
		//中间值小于查找值
		if (arr[mid] < n)
		{
			//更改左值下标缩小查找域
			left = mid + 1;
		}
		else if (arr[mid] > n) //中间值大于查找值
		{
			//更改右值下标缩小查找域
			right = mid - 1;
		}
		//找到返回输入值的下标
		else
		{
			printf("%d\n", mid);
			flag = true;
			break;
		}
	}
	//未找到返回-1
	if (!flag)
	{
		printf("%d\n", -1);
	}

	return 0;
}
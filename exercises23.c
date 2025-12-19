#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main23()
{
	//25. 合并有序数组
	//25.1 题⽬描述：
	//输⼊两个升序排列的序列，将两个序列合并为⼀个升序序列并输出。输⼊包含三⾏，
	//第⼀⾏包含两个正整数n, m，⽤空格分隔。n表⽰第⼆⾏第⼀个升序序列中数字的个数，
	//m表⽰第三⾏第⼆个升序序列中数字的个数。其中1 <= n <= 30, 1 <= m <= 30
	//第⼆⾏包含n个整数，⽤空格分隔。第三⾏包含m个整数，⽤空格分隔。
	//输出为⼀⾏，输出⻓度为n + m的升序序列，
	//即⻓度为n的升序序列和⻓度为m的升序序列中的元素重新进⾏升序序列排列合并。

	int arr1[30] = { 0 };
	int arr2[30] = { 0 };
	//arr1和arr2合并后的数组
	int arr3[60] = { 0 };
	//arr1数组的元素个数
	int n = 0;
	//arr2数组的元素个数
	int m = 0;
	//接收n, m并判断有效输入
	while (1)
	{
		scanf("%d%*c%d", &n, &m);
		if (1 <= n && n <= 30 && 1 <= m && m <= 30)
		{
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//记录arr3被遍历到的位置
	int i = 0;
	//记录arr1和arr2被拷贝到的位置
	int p1 = 0;
	int p2 = 0;
	//将arr1和arr2中的元素升序拷贝到arr3
	//arr1或arr2完全拷贝到arr3后结束
	while (p1 < n && p2 < m)
	{
		//比较arr1和arr2中的元素，先拷贝较小值
		if (arr1[p1] < arr2[p2])
		{
			//拷贝并将拷贝到的数组指向的位置加1
			arr3[i++] = arr1[p1++];
		}
		else
		{
			arr3[i++] = arr2[p2++];
		}
	}
	//arr1中的元素已全部完成拷贝，拷贝arr2中未拷贝的较大值
	if (p1 == n)
	{
		//arr2完全拷贝到arr3后结束
		while (p2 < m)
		{
			arr3[i++] = arr2[p2++];
		}
	}
	//arr2中的元素已全部完成拷贝，拷贝arr1中未拷贝的较大值
	if (p2 == m)
	{
		//arr1完全拷贝到arr3后结束
		while (p1 < n)
		{
			arr3[i++] = arr1[p1++];
		}
	}
	for (int j = 0; j < n + m; j++)
	{
		printf("%d ", arr3[j]);
	}
	printf("\n");

	return 0;
}
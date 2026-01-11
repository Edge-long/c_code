#include <stdio.h>
#define ROW 5
#define COL 5

//初始化
void init(int* arr, int ar[ROW][COL], int len, int width)
{
	if (width == 0)
	{
		//初始化为1~10
		for (int i = 0; i < len; i++)
		{
			arr[i] = i + 1;
		}
	}
	else
	{
		//初始化为10~34
		int val = 9;
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < width; j++)
			{
				ar[i][j] = 1 + val++;
			}
		}
	}
}

//打印
void print(int* arr, int ar[ROW][COL], int len, int width)
{
	if (width == 0)
	{
		for (int i = 0; i < len; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	else
	{
		for (int i = 0; i < len; i++)
		{
			for (int j = 0; j < width; j++)
			{
				//每个单位预留2字符位
				printf("%2d ", ar[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

//反转
void _reverse(int* arr, int ar[ROW][COL], int len, int width)
{
	if (width == 0)
	{
		for (int i = 0, j = len - 1; i <= j; i++, j--)
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
	}
	else //针对于二维数组的首尾反转
	{
		//i为整个数组的首行，k为整个数组的末行
		for (int i = 0, k = len - 1; i <= k; i++, k--)
		{
			//反转中间行的所有元素
			if (i == k)
			{
				//将首尾元素互换，遍历到中间行的中间元素
				for (int j = 0; j < len / 2; j++)
				{
					int tmp = ar[i][j];
					ar[i][j] = ar[i][width - 1 - j];
					ar[i][width - 1 - j] = tmp;
				}
			}
			else  //反转除中间行的各对应行的各对应元素
			{
				for (int j = 0; j < width; j++)
				{
					int tmp = ar[i][j];
					ar[i][j] = ar[k][width - 1 - j];
					ar[k][width - 1 - j] = tmp;
				}
			}
		}
	}
}

int main020()
{
	//一维数组
	int arr[10];
	init(arr, NULL, sizeof(arr) / sizeof(arr[0]), 0);
	print(arr, NULL, sizeof(arr) / sizeof(arr[0]), 0);
	_reverse(arr, NULL, sizeof(arr) / sizeof(arr[0]), 0);
	print(arr, NULL, sizeof(arr) / sizeof(arr[0]), 0);
	//二维数组
	int ar[ROW][COL];
	init(NULL, ar, ROW, COL);
	print(NULL, ar, ROW, COL);
	_reverse(NULL, ar, ROW, COL);
	print(NULL, ar, ROW, COL);

	return 0;
}
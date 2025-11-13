#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main01()
{
	//多个字符从两端移动，向中间汇聚
	
	//显示字符串
	char string1[] = "Congratulation for you!";
	//遮盖字符串
	char string2[] = "***********************";
	//左下标
	int left = 0;
	//右下标(sizeof求出的整体字符串长度减\0和1)
	int right = sizeof(string1) / sizeof(string1[0]) - 2; //strlen(string1) - 1
	//从两端遍历字符串
	while (left <= right)
	{
		//依次替换遮盖字符串
		string2[left] = string1[left];
		string2[right] = string1[right];

		printf("%s\n", string2);
		Sleep(1000); //睡眠函数的单位为毫秒，作用为程序运行间隔时间
		system("cls"); //清屏
		left++;
		right--;
	}
	printf("%s\n", string2);

	return 0;
}
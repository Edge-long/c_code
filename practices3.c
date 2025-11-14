#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int get_days_of_month(int y, int m);
int is_leap_year(int y);

int main03()
{
	//每年各月份的天数
	//输入时间年和月，计算当年当月的天数，通过函数实现

	int year = 0;
	int month = 0;
	scanf("%d%*c%d", &year, &month);
	int days = get_days_of_month(year, month);
	printf("%d\n", days);

	return 0;
}

//计算输入年输入月的天数
int get_days_of_month(int y, int m)
{
	//默认存储平年每月天数
	int arr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (is_leap_year(y) && m == 2)
	{
		//是闰年修改二月天数
		++arr[m - 1];
	}
	return arr[m - 1];
}

//判断输入年是否为闰年
int is_leap_year(int y)
{
	//能被4整除同时不能被100整除或能被400整除
	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
	{
		return true;
	}
	return false;

}

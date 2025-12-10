#include <stdio.h>
#include <assert.h>

//比较字符串的函数，返回值为比较结果(大于0或等于0或小于0的数)
int string_compare(const char* str1, const char* str2)
{
	//断言传入的指针变量不为空
	assert(str1 && str2);
	//遍历到字符串中的对应字符不等或直到\0都全等
	while (*str1 == *str2)
	{
		//判断字符串相等的情况
		if (*str1 == '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	//比较不等字符返回比较结果
	if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}

int main014()
{
	//模拟实现strcmp函数比较字符串

	char arr1[] = "abc";
	char arr2[] = "abcdef";
	int r = string_compare(arr1, arr2);
	if (r > 0)
	{
		printf("arr1 > arr2\n");
	}
	else if (r < 0)
	{
		printf("arr1 < arr2\n");
	}
	else
	{
		printf("arr1 == arr2");
	}

	return 0;
}
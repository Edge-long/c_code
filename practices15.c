#include <stdio.h>
#include <assert.h>

//在字符串中查找子串的函数，返回值为第一个找到的子串的地址或NULL
char* string_string(const char* str1, const char* str2)
{
	//断言传入的指针变量不为空
	assert(str1 && str2);
	//存储被查找字符串与子串首字符匹配时开始完整比较子串的字符地址
	char* p = str1;
	//存储被查找字符串被遍历位置和子串的首地址
	char* s1 = NULL;
	char* s2 = NULL;
	//最多遍历到被查找字符串的末尾
	while (*p)
	{
		//每次遍历时更新开始比较的位置
		s1 = p;
		//如果完整比较子串时内容不等，重置s2指向子串地址
		s2 = str2;
		//当被查找字符串与子串首字符匹配时开始完整比较子串
		while ((*s1 == *s2) && *s1 && *s2) //内容不相等或s1、s2指向\0时停止循环
		{
			s1++;
			s2++;
		}
		//当从p指向的字符到子串的末尾都相等
		if (*s2 == '\0')
		{
			//返回被查找字符中第一个找到的子串的地址
			return p;
		}
		//如果完整比较子串时内容不等，从开始比较的位置处加1继续比较
		p++;
	}
	//未找到返回空指针
	return NULL;
}

int main015()
{
	//模拟实现strstr函数在字符串中查找子串

	char arr1[] = "heheabcdefabcdef";
	char arr2[] = "def";
	printf("%s\n", string_string(arr1, arr2));

	return 0;
}
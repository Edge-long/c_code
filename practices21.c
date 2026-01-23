#include <stdio.h>

//传入结构体类型名和成员名，将结构体首地址设置为0并偏移到成员所在位置后取地址，得到偏移量
#define OFFSETOF(StructType, MemberName) (size_t)&(((StructType *)0)->MemberName)

struct Test
{
	int a;
	float b;
	char c;
};

//奇数位：01010101010101010101010101010101->十六进制数：0x55555555
//偶数位：10101010101010101010101010101010->十六进制数：0xaaaaaaaa
//取出奇数位左移一位，取出偶数位右移一位，合并后得到奇偶互换后的值
#define SWAPINTBIT(n) ((((n) & 0x55555555) << 1) | (((n) & 0xaaaaaaaa) >> 1))

int main021()
{
	//写一个宏，计算结构体中某变量相对于首地址的偏移量，并给出说明
	//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换

	printf("%zu\n", OFFSETOF(struct Test, a));
	printf("%zu\n", OFFSETOF(struct Test, b));
	printf("%zu\n", OFFSETOF(struct Test, c));

	printf("%d\n", SWAPINTBIT(6));
	printf("%d\n", SWAPINTBIT(10));
	printf("%d\n", SWAPINTBIT(12));

	return 0;
}
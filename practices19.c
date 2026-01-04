#include <stdio.h>

//求最大公约数的函数1
int findGCD(int* nums, int numsSize)
{
    //求每两个相邻数的最大公约数，并求出所有最大公约数的最大公约数
    for (int i = 0; i < numsSize - 1; i++)
    {
        //所求所有数的最大公约数的数量在每次遍历中递减
        for (int j = 0; j < numsSize - 1 - i; j++)
        {
            int m = nums[j];
            int n = nums[j + 1];
            int p = 0;
            //辗转相除法
            while (p = m % n)
            {
                m = n;
                n = p;
            }
            //将每两个相邻数的第1个依次替换为求出的最大公约数
            nums[j] = n;
        }
    }
    return nums[0];
}

//求最大公约数的函数2
int refine_findGCD(int* nums, int numsSize)
{
    //求两数的最大公约数后，分别与数组中的其他数求最大公约数
    for (int i = 0; i < numsSize - 1; i++)
    {
        int m = nums[i];
        int n = nums[i + 1];
        int p = 0;
        //辗转相除法
        while (p = m % n)
        {
            m = n;
            n = p;
        }
        //将每两个相邻数的第2个每次替换为求出的最大公约数
        nums[i + 1] = n;
    }
    return nums[numsSize - 1];
}

int main019()
{
    //求数组中所有数的共同最大公约数

    int arr1[] = { 7, 5, 6, 8, 3 };
    int ans = findGCD(arr1, sizeof(arr1) / sizeof(arr1[0]));
    printf("%d\n", ans);
    int arr2[] = { 7, 5, 6, 8, 3 };
    ans = refine_findGCD(arr2, sizeof(arr2) / sizeof(arr2[0]));
    printf("%d\n", ans);

    return 0;
}
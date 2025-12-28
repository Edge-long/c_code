//LeetCode    1365.有多少小于当前数字的数字

/*
//传入的指针为data数组的无类型指针
int cmp(const void* a, const void* b) {
    //需要先转化为int**(原数组指针)后解引用找到元素(int*)后再访问指针指向空间的第一个值
    return (*(int**)a)[0] - (*(int**)b)[0]; //升序
}

int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    //创建指针数组存储nums中的值及被排序前的原索引
    int* data[numsSize];
    for (int i = 0; i < numsSize; i++)
    {
        //为数组开辟内存，让每个指针变量元素指向2*int大小的空间
        data[i] = (int*)malloc(2 * sizeof(int));
        data[i][0] = nums[i]; //值
        data[i][1] = i; //原索引
    }
    //排序nums数组
    qsort(data, numsSize, sizeof(int*), cmp);

    //创建用于返回的数组
    int* ret = (int*)malloc(numsSize * sizeof(int));
    //指定返回数组的大小(用于题目的测试用例)
    *returnSize = numsSize;

    //定义被排序后的数组中每个值各自大于其余值的数量
    int prev = -1;
    for (int i = 0; i < numsSize; i++)
    {
        //遍历元素为1时为最小值，当其余值中存在与前一个值相等的情况，大于的值的个数相同
        if (prev == -1 || data[i][0] != data[i - 1][0])
        {
            prev = i; //有序数组的索引值即为各自值大于的值的个数
        }
        //通过data存储的各值的原索引找到prev(大于的值的个数)在ret中对应的存储位置
        ret[data[i][1]] = prev;
    }
    return ret;
}
*/
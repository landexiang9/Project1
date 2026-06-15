/*
 * 冒泡排序（升序）——带输入输出提示版
 * 输入 10 个整数，使用冒泡排序按升序排列并输出结果。
 * 与冒泡排序.c 功能相同，但增加了输入/输出提示文字。
 * static 关键字限定函数在本文件内使用。
 */
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS  1

void maopaoapixuyinyong2()
{
    int i, j, t, a[10];         /* a: 存储数组，t: 交换临时变量 */
    /* 读取 10 个整数 */
    for (i = 0; i < 10; i++)
    {
        printf("请输入第%d个数: ", i + 1);
        scanf("%d", &a[i]);
    }
    /* 冒泡排序核心算法 */
    for (i = 0; i < 9; i++)
    {
        /* 内层循环范围递减：每轮将最大值放到末尾 */
        for (j = 0; j < 9 - i; j++)
        {
            /* 若前一个大于后一个则交换 */
            if (a[j] > a[j + 1])
            {
                t = a[j]; 
                a[j] = a[j + 1]; 
                a[j + 1] = t;
            }
        }
    }
    printf("排序后的结果为：\n");
    /* 输出已排序的数组 */
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

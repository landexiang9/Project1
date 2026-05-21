/*
 * 从 a 累加到 n（降序）
 * 输入起始值 a 和结束值 n（n > a），计算并输出 n + (n-1) + ... + a 的过程和结果。
 * 与累加.c 的区别：支持自定义起始值而非固定从 1 开始。
 * 注意：此处累加方向是从大到小（n 递减到 a）。
 */
#include<stdio.h>
int leijia()
{
    int n, count = 0, s,a;      /* a: 起始值，n: 结束值，count: 累加和 */
    printf("请输入累加的第一个数：");
    scanf("%d", &a);
    printf("请输入累加后的数: ");
    scanf("%d", &n);
    s = n;                      /* 备份 n 用于输出格式判断 */
    while (n > a)               /* 从 n 递减到 a+1 */
    {
        count = count + n;


        if (n != s)             /* 除第一个数外加 + 号 */
        {
            printf("+");
        }
        printf("%d", n);
        n = n - 1;              /* 递减 */
    }
    printf("=%d", count);
    return count;

}
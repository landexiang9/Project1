#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS  1

static void maopaoapixuyinyong()
{
    int i, j, t, a[10];
    for (i = 0; i < 10; i++)
    {
        printf("请输入第%d个数: ", i + 1);
        scanf_s("%d", &a[i]);
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j]; 
                a[j] = a[j + 1]; 
                a[j + 1] = t;
            }
        }
    }
    printf("排序后的结果为：\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

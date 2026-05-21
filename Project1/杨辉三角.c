// 打印杨辉三角（帕斯卡三角形），6 行
#include <stdio.h>

int yanghuishanjiao()
{
    int a[6][6], i, t, s;
    for (t = 0; t < 6; t++) {
        a[t][0] = 1;
        a[t][t] = 1;
        for (i = 1; i < t; i++) {
            a[t][i] = a[t - 1][i - 1] + a[t - 1][i];
        }
    }

    for (t = 0; t < 6; t++) {
        for (i = 0; i <= t; i++) {
            printf("%d ", a[t][i]);
        }
        printf("\n");
    }
    return 0;
}
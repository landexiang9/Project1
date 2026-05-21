// 从 a 累加到 n：输入起始值和结束值，计算区间和
#include<stdio.h>
int leijia()
{
    int n, count = 0, s,a;
    printf("�������ۼӵĵ�һ������");
    scanf("%d", &a);
    printf("�������ۼӺ����: ");
    scanf("%d", &n);
    s = n;
    while (n > a)
    {
        count = count + n;


        if (n != s)
        {
            printf("+");
        }
        printf("%d", n);
        n = n - 1;
    }
    printf("=%d", count);
    return count;

}
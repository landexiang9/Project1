int leijia()
{
    int n, count = 0, s,a;
    printf("请输入累加的第一个数：");
    scanf("%d", &a);
    printf("请输入累加后的数: ");
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
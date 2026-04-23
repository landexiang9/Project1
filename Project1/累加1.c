int leijia()
{
    int n, count = 0, s;
    printf("请输入一个整数: ");
    scanf("%d", &n);
    s = n;
    while (n > 0)
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
    return 0;

}
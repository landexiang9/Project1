void  zhizhengmaopaoapixuyinyongsort(int* a);
void zhizhengmaopaoapixuyinyong()
{
    int i, j, a[10];    
   
    
    for (i = 0; i < 10; i++)
    {
        printf("请输入第%d个数: ", i + 1);
        scanf("%d", &a[i]);
    }
    zhizhengmaopaoapixuyinyongsort(a);
   
    printf("排序后的结果为：\n");
    /* 输出已排序的数组 */
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void  zhizhengmaopaoapixuyinyongsort(int *a)
{
    int i, j ,t ,*acc=a;
    for (i = 0; i < 9; i++)
    {

        for (j = 0; j < 9 - i; j++)
        {
            /* 若前一个大于后一个则交换 */
            if (*acc > *(acc + 1))
            {
                t = *acc;
                *acc = *(acc + 1);
                *(acc + 1) = t;

            }
            acc++;
        }
        acc = a;
    }
}
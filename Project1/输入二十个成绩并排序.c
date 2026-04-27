#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
void maopaoapixuyinyong()
{
	int i, j, t, a[20];
	for (i = 0; i < 20; i++)
	{
		printf("请输入第%d个成绩 ", i + 1);
		scanf("%d", &a[i]);

	}
	for (i = 0; i < 20; i++)
		for (j = 0; j < 20 - i - 1; j++)
			if (a[j] > a[j + 1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
	printf("\n最高分为%d", a[19]);
	printf("\n最低分为%d", a[0]);
	int sum = 0, avg;
	for (i = 0; i < 20; i++)
	{
		sum = sum + a[i];

	}
	avg = sum / 20;
	printf("\n平均分为%d", avg);
}

// 输入 20 个成绩，冒泡排序后输出最高分、最低分和平均分
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
void maopaoapixuyinyong()
{
	int i, j, t, a[20];
	for (i = 0; i < 20; i++)
	{
		printf("�������%d���ɼ� ", i + 1);
		scanf("%d", &a[i]);

	}
	for (i = 0; i < 20; i++)
		for (j = 0; j < 20 - i - 1; j++)
			if (a[j] > a[j + 1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
	printf("\n��߷�Ϊ%d", a[19]);
	printf("\n��ͷ�Ϊ%d", a[0]);
	int sum = 0;
	double avg;
	for (i = 0; i < 20; i++)
	{
		sum = sum + a[i];

	}
	avg = sum / 20.0;
	printf("\nƽ����Ϊ%.2f", avg);
}

#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
int qushuzhuzhuidazhimain()
{
	int* p;
	int* max1(int n);
	p = max1(8);
	printf("最大值是：%d\n", *p);
	return 0;
}
int* max1(int n)
{
	static int a[] = { 13,24,38,27,11,9,36,18 };
	int i, m = 0;
	for (i = 1; i < n; i++)
		if (a[m] < a[i])
			m = i;
	return &a[m];
}
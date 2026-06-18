int feibonaqisulei()
{
	int a, b, c, n, i;
	printf("请输入斐波那契数列的项数n：");
	scanf("%d", &n);
	a = 0; b = 1;
	for (i = 1; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", a);
	}
	printf("斐波那契数列的第%d项是：%d\n", n, a);
	return 0;

}
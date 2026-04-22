int tuzhifanzi()
{
	int a=0, b=1, c,n,m;
	printf("请输入兔子繁殖的月数:");
	scanf("%d",&n);
	for (m = 0; m <= n; m++)
	{
		c = a + b;
		a = b;
		b = c;
		if (m != 0 )
		{
			printf("第%d个月兔子有", m);
			printf("%d对\n", c);
		}
	}
	
	



}
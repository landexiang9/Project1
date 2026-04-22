int qiu1tonzhijie3he7zhengchu()
{
	int n, i;
	double count = 0;
	printf("«Î ‰»În: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 || i % 7 == 0)
		{
			count = count + i;
			if (i != n)
			{
				printf("%d+", i);
			}
			else
			{
				printf("%d", i);
			}
		}
		
	}
	printf("=%lf", count);
}
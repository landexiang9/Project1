int nfenziyi()
{
	int n, i;
	double count = 0;
	printf("«Î ‰»În: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		count = count + 1.0 / i;
		if (i != n)
		{
			printf("1/%d+", i);
		}
		else
		{
			printf("1/%d", i);
		}
		
	}
	printf("=%lf", count);
}
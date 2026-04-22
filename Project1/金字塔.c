int jingzita()
{
	int n ,i ,j,k;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		k = n - i;
		for (j = 1;j<=k;j++)
			{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	


}
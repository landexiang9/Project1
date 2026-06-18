int suzijinzita()
{
	int n, i, j, k, s=1;
	printf("ÇëÊäÈë½ğ×ÖËş²ãÊın:");
	scanf("%d", &n);
	k = n - 1;
	for (i = 1; i <= n; i++)
	{
		
		for (j = 0; j <= k; j++)
		{
			printf(" ");
			
		}
		k--;
		for (j = 1; j <= s; j++)
			printf("%d ", s);
		printf("\n");
		s++;
	}
	return 0;
}
	
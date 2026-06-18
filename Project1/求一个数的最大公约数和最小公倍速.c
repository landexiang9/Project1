int qiuzhuidagongyueshuhezuixiaogongbeishu()
{
	int a, b, max, min, i, gcd, lcm;
	printf("请输入两个整数a和b：");
	scanf("%d %d", &a, &b);
	/* 确定最大值和最小值 */
	max = (a > b) ? a : b;
	min = (a < b) ? a : b;
	/* 计算最大公约数（GCD） */
	for (i = min; i >= 1; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
			break;
		}
	}
	/* 计算最小公倍数（LCM） */
	lcm = (a * b) / gcd;
	printf("最大公约数(GCD)是：%d\n", gcd);
	printf("最小公倍数(LCM)是：%d\n", lcm);
	return 0;
}
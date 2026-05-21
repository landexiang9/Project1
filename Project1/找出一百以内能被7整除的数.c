// 找出 100 以内能被 7 整除的数，每行输出 5 个
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int yibaichuqi()
{ 
	int t = 1, s, n=1;
	for(s=0;n<=100;n=n+1)
	{
		if (n % 7 == 0)
		{
			s = s + 1;
			if (s == 5)
			{
				printf("%d\n", n);
				s = 0;
				continue;
			}
			printf("%d ", n);
		}
		
	}
	return 0;
}
int yibaichuqigoto()
{
	int t = 1, s, n = 1;
	for (s = 0; n <= 100; n = n + 1)
	{   
		if (n % 7 == 0)
		{
			
			s = s + 1;
			if (s == 5)
			{
				printf("%d\n", n);
				s = 0;
				goto a;
			}
			printf("%d ", n);
			a:;
		}

	}
	return 0;
}
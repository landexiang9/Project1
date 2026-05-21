// 判断并输出 100-999 之间的所有水仙花数（阿姆斯特朗数）
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int panduanshuixianhuasu(int a)
{
	int b,c,d;
	//scanf("%d",&a);
	d = a;
	b = a / 100;
	a = a - b * 100;
	c = a / 10;
	a = a - c * 10;
	
	if (b*b*b + c*c*c + a*a*a == d)
		printf("%d是水仙花数\n", d);
	/*else
		printf("%d不是水仙花数", d);*/
	return 0;

}
int shengchesuzi()
{
	int a;
	for (a = 100; a < 1000; a++)
	{
		panduanshuixianhuasu(a);
	}
}
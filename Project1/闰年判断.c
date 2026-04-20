#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main11()
{
	int a, b;
	printf("请输入判断的年份：");
	scanf("%d", &a);
	if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0 ))
		printf("%d 年是闰年",a);
	else
	{
		printf("%d年不是闰年", a);
		printf("\nbut你是一个大帅哥");

	}
	if (a == 2008)
		printf("\n并且你是大帅哥");


}
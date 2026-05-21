// 判断一个整数是否为偶数
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int main9()
{
	int a, b;
printf("请输入一个整数：");
scanf("%d", &a);
if (a % 2 == 0)
printf("%d是偶数", a);
else
printf("%d是奇数", a);
return 0;

}
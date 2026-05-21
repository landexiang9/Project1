// 将小写字符转换为大写（分别用 if-else 和三目运算符演示）
#define _CRT_SECURE_NO_WARNINGS  1
#pragma warning(disable:6031)
#include<stdio.h>
int an(char t);
int bn(char s);

int main14()
{
	char a;
	int b;
	printf("请输入一个字符");
	scanf(" %c", &a);
	printf("请输入0或1来选择方式：\n [1]使用条件表达式\n [0]使用if语句\n:");
	scanf("%d",&b);
	if (b ==0)
		an(a);
	else if (b == 1)
		bn(a);
	else
		printf("请输入正确的方式");
	
	return 0;
}
int bn(char s)
{
	printf("转换后的字符为%c", s >= 97 ? s - 32 : s);
	return 0;

}
int an(char t)
{
	if (t >= 97)
		printf("转换为大写%c", t - 32);
	else
		printf("无需转换,字符为%c", t);

	return 0;

}